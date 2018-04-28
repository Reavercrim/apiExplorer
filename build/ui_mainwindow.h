/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab_user;
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_4;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *le_nickname;
    QLabel *label_6;
    QLabel *label_4;
    QLineEdit *le_firstname;
    QComboBox *cb_gender;
    QLineEdit *le_lastname;
    QLineEdit *le_mail;
    QLabel *label_5;
    QDateEdit *de_birthdate;
    QGroupBox *groupBox_3;
    QFormLayout *formLayout_2;
    QLabel *label_7;
    QLineEdit *lineEdit_5;
    QLabel *label_8;
    QLineEdit *lineEdit_6;
    QLabel *label_9;
    QLineEdit *le_city;
    QLabel *label_10;
    QLineEdit *le_zip;
    QLabel *label_11;
    QLineEdit *le_state;
    QLabel *label_12;
    QLineEdit *le_country;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QSpacerItem *verticalSpacer;
    QListWidget *lw_users;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_5;
    QTextEdit *textEdit;
    QWidget *tab_ladder;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_6;
    QLabel *label_14;
    QLineEdit *le_token;
    QLabel *label_13;
    QComboBox *cb_endpoint;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(752, 787);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab_user = new QWidget();
        tab_user->setObjectName(QStringLiteral("tab_user"));
        gridLayout_2 = new QGridLayout(tab_user);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        groupBox = new QGroupBox(tab_user);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        gridLayout_4 = new QGridLayout(groupBox);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_3->addWidget(label_2, 1, 0, 1, 1);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_3->addWidget(label_3, 2, 0, 1, 1);

        le_nickname = new QLineEdit(groupBox_2);
        le_nickname->setObjectName(QStringLiteral("le_nickname"));

        gridLayout_3->addWidget(le_nickname, 2, 1, 1, 1);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_3->addWidget(label_6, 3, 0, 1, 1);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_3->addWidget(label_4, 4, 0, 1, 1);

        le_firstname = new QLineEdit(groupBox_2);
        le_firstname->setObjectName(QStringLiteral("le_firstname"));

        gridLayout_3->addWidget(le_firstname, 0, 1, 1, 1);

        cb_gender = new QComboBox(groupBox_2);
        cb_gender->setObjectName(QStringLiteral("cb_gender"));
        cb_gender->setEnabled(false);

        gridLayout_3->addWidget(cb_gender, 3, 1, 1, 1);

        le_lastname = new QLineEdit(groupBox_2);
        le_lastname->setObjectName(QStringLiteral("le_lastname"));

        gridLayout_3->addWidget(le_lastname, 1, 1, 1, 1);

        le_mail = new QLineEdit(groupBox_2);
        le_mail->setObjectName(QStringLiteral("le_mail"));

        gridLayout_3->addWidget(le_mail, 4, 1, 1, 1);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_3->addWidget(label_5, 5, 0, 1, 1);

        de_birthdate = new QDateEdit(groupBox_2);
        de_birthdate->setObjectName(QStringLiteral("de_birthdate"));

        gridLayout_3->addWidget(de_birthdate, 5, 1, 1, 1);

        groupBox_3 = new QGroupBox(groupBox_2);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        formLayout_2 = new QFormLayout(groupBox_3);
        formLayout_2->setSpacing(6);
        formLayout_2->setContentsMargins(11, 11, 11, 11);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setHorizontalSpacing(9);
        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_7);

        lineEdit_5 = new QLineEdit(groupBox_3);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, lineEdit_5);

        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName(QStringLiteral("label_8"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_8);

        lineEdit_6 = new QLineEdit(groupBox_3);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, lineEdit_6);

        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName(QStringLiteral("label_9"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_9);

        le_city = new QLineEdit(groupBox_3);
        le_city->setObjectName(QStringLiteral("le_city"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, le_city);

        label_10 = new QLabel(groupBox_3);
        label_10->setObjectName(QStringLiteral("label_10"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_10);

        le_zip = new QLineEdit(groupBox_3);
        le_zip->setObjectName(QStringLiteral("le_zip"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, le_zip);

        label_11 = new QLabel(groupBox_3);
        label_11->setObjectName(QStringLiteral("label_11"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_11);

        le_state = new QLineEdit(groupBox_3);
        le_state->setObjectName(QStringLiteral("le_state"));

        formLayout_2->setWidget(4, QFormLayout::FieldRole, le_state);

        label_12 = new QLabel(groupBox_3);
        label_12->setObjectName(QStringLiteral("label_12"));

        formLayout_2->setWidget(5, QFormLayout::LabelRole, label_12);

        le_country = new QLineEdit(groupBox_3);
        le_country->setObjectName(QStringLiteral("le_country"));

        formLayout_2->setWidget(5, QFormLayout::FieldRole, le_country);


        gridLayout_3->addWidget(groupBox_3, 7, 0, 1, 2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_2, 6, 0, 1, 2);


        gridLayout_4->addWidget(groupBox_2, 1, 1, 1, 1);

        groupBox_4 = new QGroupBox(groupBox);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        verticalLayout = new QVBoxLayout(groupBox_4);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton_2 = new QPushButton(groupBox_4);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setEnabled(false);

        verticalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(groupBox_4);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setEnabled(false);

        verticalLayout->addWidget(pushButton);

        pushButton_3 = new QPushButton(groupBox_4);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setEnabled(false);

        verticalLayout->addWidget(pushButton_3);


        gridLayout_4->addWidget(groupBox_4, 3, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer, 2, 1, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 1, 1, 1);

        lw_users = new QListWidget(tab_user);
        lw_users->setObjectName(QStringLiteral("lw_users"));

        gridLayout_2->addWidget(lw_users, 0, 0, 1, 1);

        groupBox_6 = new QGroupBox(tab_user);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        gridLayout_5 = new QGridLayout(groupBox_6);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        textEdit = new QTextEdit(groupBox_6);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setReadOnly(true);

        gridLayout_5->addWidget(textEdit, 0, 0, 1, 1);


        gridLayout_2->addWidget(groupBox_6, 1, 0, 1, 2);

        tabWidget->addTab(tab_user, QString());
        tab_ladder = new QWidget();
        tab_ladder->setObjectName(QStringLiteral("tab_ladder"));
        tabWidget->addTab(tab_ladder, QString());

        gridLayout->addWidget(tabWidget, 1, 0, 1, 1);

        groupBox_5 = new QGroupBox(centralWidget);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        gridLayout_6 = new QGridLayout(groupBox_5);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        label_14 = new QLabel(groupBox_5);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout_6->addWidget(label_14, 0, 2, 1, 1);

        le_token = new QLineEdit(groupBox_5);
        le_token->setObjectName(QStringLiteral("le_token"));

        gridLayout_6->addWidget(le_token, 0, 1, 1, 1);

        label_13 = new QLabel(groupBox_5);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout_6->addWidget(label_13, 0, 0, 1, 1);

        cb_endpoint = new QComboBox(groupBox_5);
        cb_endpoint->setObjectName(QStringLiteral("cb_endpoint"));

        gridLayout_6->addWidget(cb_endpoint, 0, 3, 1, 1);


        gridLayout->addWidget(groupBox_5, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "FDP Finder 4000", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "Users", nullptr));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "User", nullptr));
        label->setText(QApplication::translate("MainWindow", "Firstname", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Lastname", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Nickname", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Gender", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Mail", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Birthdate", nullptr));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Address", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "N\302\260", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "Street", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "City", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "Zip Code", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "State/Region", nullptr));
        label_12->setText(QApplication::translate("MainWindow", "Country", nullptr));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "Action", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "Create", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Update", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow", "Delete", nullptr));
        groupBox_6->setTitle(QApplication::translate("MainWindow", "Response", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_user), QApplication::translate("MainWindow", "User", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_ladder), QApplication::translate("MainWindow", "Ladder", nullptr));
        groupBox_5->setTitle(QApplication::translate("MainWindow", "Settings", nullptr));
        label_14->setText(QApplication::translate("MainWindow", "Endpoint", nullptr));
        label_13->setText(QApplication::translate("MainWindow", "Token", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
