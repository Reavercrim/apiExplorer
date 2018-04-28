#include <QJsonObject>
#include <QJsonDocument>
#include <QJsonArray>
#include <QDate>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "saveconfig.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


//Api
    apiCaller = new ApiCaller(manager);

    loadC();
    initEndpoint();

}

void MainWindow::saveC()
{
    QString str;

    str = ui->le_token->text();

    SaveConfig::saveConfig("token",str,"tkn");

}

void MainWindow::loadC()
{
    QVariant l(SaveConfig::loadConfig("token","tkn"));

    if(!l.isNull())
    {
        QString str = l.toString();
        ui->le_token->setText(str);
    }

    l.clear();
}

void MainWindow::on_cb_endpoint_currentIndexChanged(int id)
{
    getGenders();
    getUsers();
}

void MainWindow::on_lw_users_currentRowChanged(int currentRow)
{
    ui->le_firstname->setText(users.at(currentRow).firstname);
    ui->le_lastname->setText(users.at(currentRow).lastname);
    ui->le_nickname->setText(users.at(currentRow).nickname);
    ui->cb_gender->setCurrentIndex(users.at(currentRow).gender-1);
    ui->de_birthdate->setDate(QDate::fromString(users.at(currentRow).birthdate,"yyyy-MM-dd"));
    ui->le_mail->setText(users.at(currentRow).mail);
    ui->le_city->setText(users.at(currentRow).city);
    ui->le_zip->setText(users.at(currentRow).zip);
    ui->le_state->setText(users.at(currentRow).state);
    ui->le_country->setText(users.at(currentRow).country);

}


void MainWindow::initEndpoint()
{
    ui->cb_endpoint->addItem("https://preprod.sgl.cyprx.cloud/");
    ui->cb_endpoint->addItem("https://api.smgl.ch/");
}


void MainWindow::getGenders()
{
    while(ui->cb_gender->count()>0)
    {
        ui->cb_gender->removeItem(0);
    }

    QUrl url(ui->cb_endpoint->currentText() + "genders");

    apiCaller->call(url,this,SLOT(displayGenders(QNetworkReply*)));
}

void MainWindow::getUsers()
{
    while(ui->lw_users->count()>0)
    {
        delete ui->lw_users->takeItem(0);
    }

    users.erase(users.begin(),users.end());

    QUrl url(ui->cb_endpoint->currentText() + "users?token=" + ui->le_token->text());

    apiCaller->call(url,this,SLOT(displayUsers(QNetworkReply*)));
}


void MainWindow::displayGenders(QNetworkReply* reply)
{
    QString m_str(reply->readAll());
    const QJsonArray  m_json = QJsonDocument::fromJson(m_str.toUtf8()).array();

    for (int i=0; i<m_json.size(); i++)
    {
        ui->cb_gender->addItem(m_json[i]["name"].toString());
    }

}

void MainWindow::displayUsers(QNetworkReply* reply)
{

    QString m_str(reply->readAll());
    const QJsonArray  m_json = QJsonDocument::fromJson(m_str.toUtf8()).array();

    int id,gender;
    QString firstname,lastname,nickname,mail,birthdate,city,zip,state,country;

    for (int i=0; i<m_json.size(); i++)
    {
        id = m_json[i]["id"].toInt();
        firstname = m_json[i]["firstname"].toString();
        lastname = m_json[i]["lastname"].toString();
        nickname = m_json[i]["nickname"].toString();
        mail = m_json[i]["mail"].toString();
        birthdate = m_json[i]["birthdate"].toString();
        gender = m_json[i]["gender_id"].toInt();

        city = m_json[i]["address"]["locality"]["name"].toString();
        zip = QString::number(m_json[i]["address"]["locality"]["postal_code"].toInt());
        state = m_json[i]["address"]["locality"]["state"]["name"].toString();
        country = m_json[i]["address"]["locality"]["state"]["country"]["name"].toString();

        users.push_back(User(id,firstname,lastname,nickname,mail,birthdate,gender,0,"",city,zip,state,country));
    }

    for (int i=0; i< users.size(); i++)
    {
        User u = users.at(i);
        ui->lw_users->addItem(u.firstname + " " + u.lastname);
    }

}

MainWindow::~MainWindow()
{
    saveC();
    delete ui;
}
