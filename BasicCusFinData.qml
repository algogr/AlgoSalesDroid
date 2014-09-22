import QtQuick 2.0

Rectangle
{
    id: root
    property alias  balance:balancenumber.text
    property alias checques:checquesnumber.text
    property alias plafon:plafonumber.text
    property alias sales:salesnumber.text
    Component.onCompleted: {

    }
    //Column}
    //{
        //width:parent.width/2
        Text
        {
            id: balancetext
            text:"Yπόλοιπο :"
            font.pixelSize: 25
            //width:parent.width
            wrapMode: Text.WordWrap
            color: "red"
        }

        Text
        {
            id: balancenumber
            text:balance
            font.pixelSize: 25
            anchors.right: parent.right
            horizontalAlignment: Text.AlignRight
            //width:parent.width
            //wrapMode: Text.WordWrap
            color: "white"
        }

        Text
        {
            id:checquestext
            text:"Ανοιχτά αξιόγραφα :"

            font.pixelSize: 25
            anchors.top:balancetext.bottom
            anchors.topMargin: 25
            width:parent.width
            wrapMode: Text.WordWrap
            color: "yellow"
        }

        Text
        {
            id: checquesnumber
            text:checques
            font.pixelSize: 25
            anchors.right: parent.right
            horizontalAlignment: Text.AlignRight
            anchors.top:balancenumber.bottom
            anchors.topMargin: 25
            //width:parent.width
            //wrapMode: Text.WordWrap
            color: "white"
        }



        Text
        {
            id:plafontext
            text:"Πλαφόν :"
            font.pixelSize: 25
            anchors.top:checquestext.bottom
            anchors.topMargin: 25
            width:parent.width
            wrapMode: Text.WordWrap
            color: "blue"
        }

        Text
        {
            id: plafonumber
            text:plafon
            font.pixelSize: 25
            anchors.right: parent.right
            anchors.top:checquesnumber.bottom
            anchors.topMargin: 25
            horizontalAlignment: Text.AlignRight
            //width:parent.width
            //wrapMode: Text.WordWrap
            color: "white"
        }

        Text
        {
            id:salestext
            text:"Τζίρος :"
            font.pixelSize: 25
            anchors.top:plafontext.bottom
            anchors.topMargin: 25
            width:parent.width
            wrapMode: Text.WordWrap
            color: "green"
        }

        Text
        {
            id: salesnumber
            text:sales
            //text: Number(sales).toLocaleString(Qt.locale("el_GR"))
            font.pixelSize: 25
            anchors.right: parent.right
            anchors.top:plafonumber.bottom
            anchors.topMargin: 25
            horizontalAlignment: Text.AlignRight
            //width:parent.width
            //wrapMode: Text.WordWrap
            color: "white"
        }



}


