#ifndef SAVECONFIG_H
#define SAVECONFIG_H

#include <QSettings>

class SaveConfig
{
public:
    SaveConfig();

    static void saveConfig(const QString &key, const QVariant &value, const QString &group);
    static QVariant loadConfig(const QString &key, const QString &group);
};

#endif // SAVECONFIG_H
