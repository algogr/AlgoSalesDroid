import QtQuick 2.0


Item {
    id: root
    width: parent.width
    height: 88

    property alias year: year.text
    property alias month: month.text
    property alias amount: amount.text

    signal clicked

    Rectangle {
        anchors.fill: parent
        color: "#11ffffff"

    }

    Text {
        id: year
        color: "white"
        width: parent.width/3
        font.pixelSize: 25
        text: modelData
        anchors.verticalCenter: parent.verticalCenter
        anchors.left: parent.left
        anchors.leftMargin: 30
    }

    Text {
        id: month
        color: "white"
        width: parent.width/3
        font.pixelSize: 25
        text: modelData
        anchors.verticalCenter: parent.verticalCenter
        anchors.left: year.right
        anchors.leftMargin: 30
    }


    Text {
        id: amount
        color: "white"
        width: parent.width/3
        font.pixelSize: 25
        //text: modelData
        anchors.verticalCenter: parent.verticalCenter
        anchors.left: month.right
        anchors.leftMargin: 30
        anchors.right: parent.right
        horizontalAlignment: Text.AlignRight
        anchors.rightMargin: 30
    }


}

