import QtQuick 2.1

Item {
    property var moduleLocaleNames: {
            "date_time": dsTr("Date & Time"),
            "network": dsTr("Network"),
            "disk_mount": dsTr("Disk Mount"),
            "bluetooth": dsTr("Bluetooth"),
            "sound": dsTr("Sound"),
            "power": dsTr("Power"),
            "dss": dsTr("More Settings"),
            "shutdown": dsTr("Shutdown"),
            "notification": dsTr("Notification"),
            "display": dsTr("Display"),
            "desktop": dsTr("Desktop"),
            "individuation": dsTr("Individuation"),
            "shortcuts": dsTr("Shortcuts"),
            "keyboard": dsTr("Keyboard"),
            "mouse": dsTr("Mouse"),
            //"autostart": "", #开机启动, 系统服务
            "touchpad": dsTr("Touchpad"),
            "account": dsTr("Account"),
            "default_applications": dsTr("Default Applications"),
            "system_info": dsTr("System Information"),
            "grub": dsTr("Grub Setting"),
            "home": dsTr("Home")
        }

    property var commonIds: [
            //"notification",
            "network",
            "disk_mount",
            "bluetooth",
            "sound",
            "power",
            "dss",
            "shutdown"
        ]

    property var allIds: [
            //"notification",
            "individuation",
            "display",
            "power",
            "sound",
            "mouse",
            "keyboard",
            "bluetooth",
            "account",
            "default_applications",
            //"desktop",
            //"touchpad",
            //"shortcuts",
            //"disk_mount",
            "network",
            "date_time",
            "grub",
            "system_info",
        ]

    property var hideIds: [
            "date_time",
            "mouse",
            "touchpad",
            "keyboard",
            "shortcuts",
            "display",
            "account",
            "desktop",
            "individuation",
            "default_applications",
            "system_info"
        ]
    property var statesInfo: {
            "network": ['wifi', 'wire']
        }

    function getStatesArray(s){
        return new Array();
        //if (statesInfo[s]){
            //return statesInfo[s]
        //}
        //else{
            //return new Array()
        //}
    }
}
