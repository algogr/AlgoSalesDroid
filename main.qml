import QtQuick 2.2
import QtQuick.Controls 1.1


ApplicationWindow {
    visible: true
    id:mainwindow
    width: 1000
    height: 700
    title: qsTr("AlgoSalesDroid")
    property int ordermode:0
    property int ordercusid
    signal mapclicked(string street,string city)

    Rectangle{
        anchors.fill: parent
        color: "#000000"


        ListModel {
            id: pageModel


            ListElement {
                title: "Κατάλογος Προιόντων"
                page: "Categories.qml"
            }
            ListElement {
                title: "Πελατολόγιο"
                page: "Customers.qml"
            }
                    }

}

    StackView {
        id: stackView
        anchors.fill: parent

        initialItem: Item {
            width: parent.width
            height: parent.height
            ListView {
                model: pageModel
                anchors.fill: parent
                delegate: AndroidDelegate {
                    text: title
                    onClicked:
                    {

                        stackView.push(Qt.resolvedUrl(page))
                        //mainwindow.mapclicked("ΒΕΝΙΖΕΛΟΥ 57","ΚΑΒΑΛΑ")
                    }
                }
            }
        }
    }



}
