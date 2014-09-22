import QtQuick 2.0

Item {
    id: root
    width: parent.width
    height: 88

    property alias matcode: matcode.text
    property alias matdescription: matdescription.text
    property alias qty: qty.text
    property alias price: price.text
    property alias discount:discount.text
    property alias value:netvalue.text


    signal clicked


    Rectangle {
        anchors.fill: parent
        color: "#11ffffff"
        //visible: mouse.pressed
    }

    Text {
        id: matcode
        color: "white"
        width: parent.width/6
        font.pixelSize: 15
        text: modelData
        anchors.verticalCenter: parent.verticalCenter
        anchors.left: parent.left
        //anchors.leftMargin: 30
    }

    Text {
        id: matdescription
        color: "white"
        width: parent.width/6
        font.pixelSize: 15
        text: modelData
        anchors.verticalCenter: parent.verticalCenter
        anchors.left: matcode.right
        //anchors.leftMargin: 30
    }

    Text {
        id: qty
        color: "white"
        width: parent.width/6
        font.pixelSize: 15
        text: modelData
        anchors.verticalCenter: parent.verticalCenter
        anchors.left: matdescription.right
        //a/nchors.leftMargin: 30
        horizontalAlignment: Text.AlignRight
    }

    Text {
        id: price
        color: "white"
        width: parent.width/6
        font.pixelSize: 15
        text: modelData
        anchors.verticalCenter: parent.verticalCenter
        anchors.left: qty.right
        //anchors.leftMargin: 30
        horizontalAlignment: Text.AlignRight
    }

    Text {
        id: discount
        color: "white"
        width: parent.width/6
        font.pixelSize: 15
        font.italic: true
        text: modelData
        anchors.verticalCenter: parent.verticalCenter
        anchors.left: price.right
        //anchors.leftMargin: 30
        horizontalAlignment: Text.AlignRight
    }

    Text {
        id: netvalue
        color: "white"
        width: parent.width/6
        font.pixelSize: 15
        font.italic: true
        text: modelData
        anchors.verticalCenter: parent.verticalCenter
        //anchors.left: discount.right
        //anchors.leftMargin: 30
        anchors.right: parent.right
        //anchors.rightMargin: 30
        horizontalAlignment: Text.AlignRight
    }


}
