import QtQuick 2.0


Rectangle{
    id:qbox
    visible: false
    height: parent.height/8
    width: parent.width/2
    anchors.horizontalCenter: parent.horizontalCenter
    anchors.verticalCenter: parent.verticalCenter
    border.color: "white"
    color:"black"
    MouseArea{
        anchors.fill: parent
        onClicked: msg1.visible=false
    }

    Text{

        //anchors.top: parent.top

        //width:parent.width
        //height:parent.height/2
        id:t1
        text: "Ποσότητα:"
        font.bold: true
        font.pixelSize: 15
        //anchors.verticalCenter: parent.verticalCenter
        anchors.horizontalCenter: parent.horizontalCenter
        color:"white"

    }
    Rectangle{
        anchors.top: t1.bottom
        width: 70
        height:parent.height/3
        //anchors.right: parent.right
        anchors.horizontalCenter: parent.horizontalCenter
        color:"white"
        border.color: "grey"
        TextEdit
        {
            id:te1
            anchors.fill: parent
            anchors.horizontalCenter: parent.horizontalCenter
            font.pixelSize: 25
            horizontalAlignment: TextEdit.AlignRight

        }
    }

    Rectangle{
        id:bt1
        height: parent.height/3
        width: parent.width/3
        anchors.bottomMargin: 10
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.bottom: parent.bottom
        border.color: "black"
        color:"light grey"
        Text{

            //anchors.top: parent.top

            //width:parent.width
            //height:parent.height/2
            text: "OK"

            font.bold: true
            font.pixelSize: 25
            //anchors.verticalCenter: parent.verticalCenter
            anchors.horizontalCenter: parent.horizontalCenter
            color:"black"

        }
        MouseArea{
            anchors.fill: parent
            onClicked: {
                model.insertBasket(mainwindow.ordercusid,page.selitemid,te1.text);
                qbox.visible=false;
            }
        }

    }

}
