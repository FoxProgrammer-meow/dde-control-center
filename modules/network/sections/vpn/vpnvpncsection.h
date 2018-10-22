/*
 * Copyright (C) 2011 ~ 2018 Deepin Technology Co., Ltd.
 *
 * Author:     listenerri <listenerri@gmail.com>
 *
 * Maintainer: listenerri <listenerri@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef VPNVPNCSECTION_H
#define VPNVPNCSECTION_H

#include "../abstractsection.h"
#include "contentwidget.h"
#include "lineeditwidget.h"
#include "comboboxwidget.h"
#include "passwdeditwidget.h"
#include "switchwidget.h"
#include "filechoosewidget.h"

#include <networkmanagerqt/vpnsetting.h>

namespace dcc {
namespace network {

class VpnVPNCSection : public AbstractSection
{
    Q_OBJECT

public:
    explicit VpnVPNCSection(NetworkManager::VpnSetting::Ptr vpnSetting, QFrame *parent = 0);
    virtual ~VpnVPNCSection();

    bool allInputValid() Q_DECL_OVERRIDE;
    void saveSettings() Q_DECL_OVERRIDE;

Q_SIGNALS:
    void requestPage(ContentWidget * const page) const;

private:
    void initStrMaps();
    void initUI();
    void initConnection();
    void onPasswordFlagsChanged(NetworkManager::Setting::SecretFlagType type);
    void onGroupPasswordFlagsChanged(NetworkManager::Setting::SecretFlagType type);

private:
    QMap<QString, NetworkManager::Setting::SecretFlagType> PasswordFlagsStrMap;

    NetworkManager::VpnSetting::Ptr m_vpnSetting;
    NetworkManager::Setting::SecretFlagType m_currentPasswordType;
    NetworkManager::Setting::SecretFlagType m_currentGroupPasswordType;
    NMStringMap m_dataMap;
    NMStringMap m_secretMap;

    dcc::widgets::LineEditWidget *m_gateway;
    dcc::widgets::LineEditWidget *m_userName;
    dcc::widgets::ComboBoxWidget *m_passwordFlagsChooser;
    dcc::widgets::PasswdEditWidget *m_password;

    dcc::widgets::LineEditWidget *m_groupName;
    dcc::widgets::ComboBoxWidget *m_groupPasswordFlagsChooser;
    dcc::widgets::PasswdEditWidget *m_groupPassword;
    dcc::widgets::SwitchWidget *m_userHybrid;
    dcc::widgets::FileChooseWidget *m_caFile;
};

} /* network */
} /* dcc */

Q_DECLARE_METATYPE(NetworkManager::Setting::SecretFlagType)

#endif /* VPNVPNCSECTION_H */
