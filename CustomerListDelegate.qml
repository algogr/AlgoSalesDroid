import QtQuick 2.0

Item {
    id: root
    width: parent.width
    height: 88

    property alias name: textname.text
    property alias color: textname.color
    signal clicked

    Rectangle {
        anchors.fill: parent
        color: "#11ffffff"
        visible: mouse.pressed
    }

    Text {
        id: textname
        color: "white"
        font.pixelSize: 25
        text: modelData
        width:400
        wrapMode: Text.WordWrap
        anchors.verticalCenter: parent.verticalCenter
        anchors.left: parent.left
        anchors.leftMargin: 30
    }

    Rectangle {
        anchors.left: parent.left
        anchors.right: parent.right
        anchors.margins: 15
        height: 1
        color: "#424246"
    }

    Image {
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


