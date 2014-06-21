import QtQuick 2.0

Rectangle {
    id: root
    height: parent.height/20
    anchors.bottom: parent.bottom
    width: parent.width
    color: "#000000"
    signal clicked

    Image {
        id: arrow
        source: "./images/general/navigation_previous_item.png"
        anchors.left: root.left
        anchors.leftMargin: 20
        anchors.verticalCenter: root.verticalCenter
        //visible: root.currentIndex == 1 ? true : false
        MouseArea {
            id:mouse
            anchors.fill: parent
            onClicked: root.clicked()

        }

    }

    Item {
        id: textItem
        width: parent.width*9/10
        height: root.height
        anchors.right: parent.right
        anchors.left: arrow.right
        //anchors.horizontalCenter: banner.horizontalCenter
        anchors.verticalCenter: root.verticalCenter

        Text {
            id: stocText

            anchors.verticalCenter: textItem.verticalCenter
            anchors.horizontalCenter: parent.Center
            anchors.right: qtText.left
            //color: "#ffffff"
            color: "red"
            font.family: "Abel"
            font.pointSize: 25
            text: "Algo"
        }
        Text {
            id: qtText
            anchors.verticalCenter: textItem.verticalCenter

            anchors.right: qtText1.left

            //color: "#5ea813"
            color:"white"
            font.family: "Abel"
            font.pointSize: 25
            text: "Sales"
        }
        Text {
            id: qtText1
            anchors.verticalCenter: textItem.verticalCenter

            anchors.right: parent.right

            //color: "#5ea813"
            color:"green"
            font.family: "Abel"
            font.pointSize: 25
            text: "Droid"
        }
    }


}
