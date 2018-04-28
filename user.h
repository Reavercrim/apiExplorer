#ifndef USER_H
#define USER_H

#include <QObject>

class User
{
public:
    User(int id,QString firstname,QString lastname,QString nickname,QString mail,QString birthdate,
         int gender,QString no,QString street,QString city,QString zip,QString state,QString country);

    int id;
    QString firstname;
    QString lastname;
    QString nickname;
    QString mail;
    QString birthdate;
    int gender;

    QString no;
    QString street;
    QString city;
    QString zip;
    QString state;
    QString country;
};

#endif // USER_H
