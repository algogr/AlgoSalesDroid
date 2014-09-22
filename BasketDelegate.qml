import QtQuick 2.0

Item {
    id: root
    width: parent.width
    height: 88

    property alias code: textcode.text
    property alias description: textdescription.text
    property alias quantity: textquant.text
    signal clicked

    Rectangle {
        anchors.fill: parent
        color: "#ffffff"
        //visible: mouse.pressed
    }

    Text {
        id: textcode
        color: "#000F55"
        font.pixelSize: 20
        text: modeData
        width:parent.width*3/15
        //height:parent.height
        //wrapMode: Text.WordWrap
        anchors.verticalCenter: parent.verticalCenter
        anchors.left: parent.left
        anchors.leftMargin: 30
    }

    Text {
        id: textdescription
        color: "#000F55"
        width:parent.width*5/15
        font.pixelSize: 20
        text: modelData
        wrapMode: Text.WordWrap
        anchors.verticalCenter: parent.verticalCenter
        anchors.left: textcode.right
        anchors.leftMargin: 30
    }


    Text {
        id: textquant
        color: "#000F55"
        font.pixelSize: 20
        text: modelData
        width:parent.width*2/15
        wrapMode: Text.WordWrap
        anchors.verticalCenter: parent.verticalCenter
        anchors.left: textdescription.right
        anchors.leftMargin: 30
        horizontalAlignment: Text.AlignRight
    }


    Rectangle {
        anchors.left: parent.left
        anchors.right: parent.right
        anchors.margins: 15
        height: 1
        //color: "#424246"
        color: "RoyalBlue"
    }


    Image {
        id:i1
        width: parent.width/15
        height: parent.height
        anchors.right: i2.left
        anchors.rightMargin: 20
        anchors.verticalCenter: parent.verticalCenter
        fillMode: Image.PreserveAspectFit
        source: "images/general/edit-line.png"

        MouseArea {
            id: mousedelete
            anchors.fill: parent
            onClicked: root.clicked()


        }

    }

    Image {
        id:i2
        width: parent.width/15
        height: parent.height
        anchors.right: parent.right
        anchors.rightMargin: 20
        anchors.verticalCenter: parent.verticalCenter
        fillMode: Image.PreserveAspectFit
        source: "images/general/delete-line.png"
        MouseArea {
            id: mouseedit
            anchors.fill: parent
            onClicked: root.clicked()


        }

    }



}



