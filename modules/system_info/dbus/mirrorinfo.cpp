#include "mirrorinfo.h"


MirrorInfo::MirrorInfo()
{

}

void MirrorInfo::registerMetaType()
{
    qRegisterMetaType<MirrorInfo>();
    qDBusRegisterMetaType<MirrorInfo>();
    qRegisterMetaType<MirrorInfoList>();
    qDBusRegisterMetaType<MirrorInfoList>();
}

const QDBusArgument &operator>>(const QDBusArgument &argument, MirrorInfo &info)
{
    argument.beginStructure();
    argument >> info.m_id;
    argument >> info.m_name;
    argument >> info.m_url;
    argument.endStructure();

    return argument;
}

QDBusArgument &operator<<(QDBusArgument &argument, const MirrorInfo &info)
{
    argument.beginStructure();
    argument << info.m_id;
    argument << info.m_name;
    argument << info.m_url;
    argument.endStructure();

    return argument;
}

QDebug operator<<(QDebug argument, const MirrorInfo &info)
{
    argument << "mirror id: " << info.m_id;
    argument << "mirror name: " << info.m_name;
    argument << "mirror url: " << info.m_url;

    return argument;
}
