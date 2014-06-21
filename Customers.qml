import QtQuick 2.0

Rectangle {
    width: parent.width
    height: parent.height
    color:"black"
    ListModel {
        id: customerMain


        ListElement {
            title: "Στοιχεία πελατών"
            page: "CustomerList.qml"
        }
        ListElement {
            title: "Καταστάσεις πωλήσεων"
            page: "Reports.qml"
        }
                }
    ListView {
        model: customerMain
        width:parent.width
        height:parent.height*19/20
        delegate: AndroidDelegate {
            text: title
            onClicked: stackView.push(Qt.resolvedUrl(page))
        }
    }

    NavigationBar
    {
        id:nv
        onClicked: stackView.pop();


    }

}
