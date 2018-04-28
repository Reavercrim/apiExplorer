#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QNetworkAccessManager>
#include <vector>


#include "apimanager.h"
#include "user.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void initEndpoint();
    void saveC();
    void loadC();
    void getGenders();
    void getUsers();

public slots:
    void displayGenders(QNetworkReply* reply);
    void displayUsers(QNetworkReply* reply);
    void on_cb_endpoint_currentIndexChanged(int id);
    void on_lw_users_currentRowChanged(int currentRow);

private:
    Ui::MainWindow *ui;
    QNetworkAccessManager *manager = new QNetworkAccessManager();
    ApiCaller* apiCaller;
    std::vector<User> users;

};

#endif // MAINWINDOW_H
