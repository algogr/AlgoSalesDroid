import QtQuick 2.0

Item {
    id: root
    width: parent.width
    height: 88

    property alias trndate: trndate.text
    property alias tradecode: tradecode.text
    property alias debit: debit.text
    property alias credit: credit.text
    property alias balance: balance.text

    signal clicked

    Rectangle {
        anchors.fill: parent
        color: "#11ffffff"
        visible: mouse.pressed
    }

    Text {
        id: trndate
        color: "white"
        width: parent.width/6
        font.pixelSize: 15
        text: modelData
        anchors.verticalCenter: parent.verticalCenter
        anchors.left: parent.left
        anchors.leftMargin: 30
    }

    Text {
        id: tradecode
        color: "white"
        width: parent.width/6
        font.pixelSize: 15
        text: modelData
        anchors.verticalCenter: parent.verticalCenter
        anchors.left: trndate.right
        anchors.leftMargin: 30
    }

    Text {
        id: debit
        color: "white"
        width: parent.width/6
        font.pixelSize: 15
        text: modelData
        anchors.verticalCenter: parent.verticalCenter
        anchors.left: tradecode.right
        anchors.leftMargin: 30
        horizontalAlignment: Text.AlignRight
    }

    Text {
        id: credit
        color: "white"
        width: parent.width/6
        font.pixelSize: 15
        text: modelData
        anchors.verticalCenter: parent.verticalCenter
        anchors.left: debit.right
        anchors.leftMargin: 30
        horizontalAlignment: Text.AlignRight
    }

    Text {
        id: balance
        color: "white"
        width: parent.width/6
        font.pixelSize: 15
        font.italic: true
        text: modelData
        anchors.verticalCenter: parent.verticalCenter
        anchors.left: credit.right
        anchors.leftMargin: 30
        anchors.right: imagearrow.left
        anchors.rightMargin: 30
        horizontalAlignment: Text.AlignRight
    }


    Rectangle {
        id: imagerect
        anchors.left: parent.left
        anchors.right: parent.right
        anchors.margins: 15
        height: 1
        color: "#424246"
    }

    Image {
        id: imagearrow
        anchors.right: parent.right
        anchors.rightMargin: 20
        anchors.verticalCenter: parent.verticalCenter
        source: "images/general/navigation_next_item.png"

    }

    MouseArea {
        id: mouse
        anchors.fill: parent
        onClicked: root.clicked()


    }
}
