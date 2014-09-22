import QtQuick 2.0

Rectangle
{
    id: root
    property alias street:cstreet.text
    property alias district:cdistrict.text
    property alias city: ccity.text
    property alias phone1: cphone1.text
    property alias phone2: cphone2.text
    property alias fax: cfax.text
    property alias email: cemail.text
    signal mapclicked(string addr,string city)

    Component.onCompleted: {

    }
    //Column}
    //{
        //width:parent.width/2
        Text
        {
            id: cstreet

            font.pixelSize: 25
            //width:parent.width
            wrapMode: Text.WordWrap
            color: "white"
            //anchors.fill: parent
            anchors.left: parent.left
            anchors.leftMargin: 25
            anchors.top:parent.top
            anchors.topMargin: 25
        }





        Text
        {
            id: cdistrict

            font.pixelSize: 25
            //width:parent.width
            //wrapMode: Text.WordWrap
            color: "white"
            anchors.left: parent.left
            anchors.leftMargin: 25
            anchors.top:cstreet.bottom
            anchors.topMargin: 25
        }



        Text
        {
            id:ccity

            font.pixelSize: 25
            wrapMode: Text.WordWrap
            color: "white"
            anchors.left: parent.left
            anchors.leftMargin: 25
            anchors.top:cdistrict.bottom
            anchors.topMargin: 25
        }

        Text
        {
            id: cphone1

            font.pixelSize: 25
            color: "white"
            anchors.left: parent.left
            anchors.leftMargin: 25
            anchors.top:ccity.bottom
            anchors.topMargin: 25
        }

        Text
        {
            id:cphone2

            font.pixelSize: 25

            color: "white"
            anchors.left: parent.left
            anchors.leftMargin: 25
            anchors.top:cphone1.bottom
            anchors.topMargin: 25
        }

        Text
        {
            id:cfax
            font.pixelSize: 25

            color: "white"
            anchors.left: parent.left
            anchors.leftMargin: 25
            anchors.top:cphone2.bottom
            anchors.topMargin: 25
        }
        Text
        {
            id:cemail

            font.pixelSize: 25

            color: "white"
            anchors.left: parent.left
            anchors.leftMargin: 25
            anchors.top:cfax.bottom
            anchors.topMargin: 25
            //anchors.bottom: parent.bottom
            //anchors.bottomMargin: 25
        }


        Rectangle{
            id: mapbutton
            color:"black"
            width: parent.width/6
            height: parent.height/6
            anchors.top: cemail.bottom
            anchors.topMargin: 25
            anchors.bottom: parent.bottom
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.bottomMargin: 35

            /*Text{
              //  anchors.fill: parent
                //anchors.top: cemail.bottom
                font.pixelSize: 23
                text:"lala"
                color: "white"
            }*/


            Image {
                width: parent.width
                height: parent.height

                fillMode: Image.PreserveAspectFit
                source:"qrc:///images/general/map.jpeg"

            }


            MouseArea{
                anchors.fill: parent
                onPressed:
                {
                    mainwindow.mapclicked(cstreet.text,ccity.text)
                    console.log(ccity.text)
            }

        }




}

}

