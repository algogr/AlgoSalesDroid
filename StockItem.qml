import QtQuick 2.0
import QtQuick.Controls 1.2
import SqlQueryModel 1.0
//import "qrc:///ItemAttribute"
//import Product 1.0

Rectangle {
    width: parent.width
    height: parent.height
    id:page
    color: "#000000"
    property string selitemid
    property variant prcode
    property variant prdescr
    property var attributes: new Array()
    property var attributevalues: new Array()


    //property list stock

    Rectangle{
        width:page.width
        //height: page.height*6
        height: page.height*4/20
        id: caption
        color:"#11ffffff"






        Text{

            id:itemcodel

            text:"Κωδικός : "+prcode
            font.pixelSize: 25
            color: "white"
        }

        Text{
            id:itemdescrl
            text:"Περιγραφή : "+prdescr
            font.pixelSize: 25
            width:640
            wrapMode: Text.WordWrap
            color: "white"
            anchors.top:itemcodel.bottom
        }
    }




    TabView {

        id: tabv1
        clip: true
        tabPosition: Qt.BottomEdge

        //height: page.height*5/6
        height: page.height*15/20
        width: page.width
        y: parent.height*4/20
        //anchors.top: caption.bottom
        //anchors.bottom: parent.bottom
        //anchors.left: parent.left
        //anchors.right: parent.right
        Component.onCompleted: {
            addTab("Εικόνα", imagetab)
            for (var i=0; i<attributes.length; i++){
                var c_tab=currentIndex;
                var t=addTab(attributes[i].description, Qt.createComponent("qrc:///ItemAttribute.qml"));
                currentIndex=count-1;
                //attributevalues=model.getAttributeValues(attributes[i].id);
                t.item.attid=attributes[i].id
                //console.log(attributevalues.length);
                //t.item.color="blue";

                currentIndex=c_tab;



            }

        }

        ItemImage{
            id:imagetab

            Component.onCompleted: {

                width=parent.width
                height=parent.height
            }
        }

    }

    SqlQueryModel {
        id: model


        Component.onCompleted: {
            model.opendb();
            console.log("model")
            prcode=model.getProductField(selitemid,"code")
            prdescr=model.getProductField(selitemid,"description");
            attributes=[]
            attributes=model.getProductAttrs(selitemid);

        }

    }
    NavigationBar
    {
        id:nv
        onClicked: stackView.pop();
        border.color: "slategrey"


    }
}
