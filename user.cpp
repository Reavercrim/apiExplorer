#include "user.h"

User::User(int id, QString firstname, QString lastname, QString nickname, QString mail, QString birthdate,
           int gender, QString no, QString street, QString city, QString zip, QString state, QString country)

    :id(id),firstname(firstname),lastname(lastname),nickname(nickname),mail(mail),birthdate(birthdate),
      gender(gender),no(no),street(street),city(city),zip(zip),state(state),country(country)
{

}
