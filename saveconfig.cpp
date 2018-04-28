#include "saveconfig.h"

SaveConfig::SaveConfig()
{

}


void SaveConfig::saveConfig(const QString &key, const QVariant &data, const QString &group)
{
    QSettings settings;
    settings.beginGroup(group);
    settings.setValue(key, data);
    settings.endGroup();
}

QVariant SaveConfig::loadConfig(const QString &key, const QString &group)
{
    QSettings settings;
    settings.beginGroup(group);
    QVariant value = settings.value(key);
    settings.endGroup();
    return value;
}
