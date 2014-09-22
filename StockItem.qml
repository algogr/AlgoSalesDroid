import QtQuick 2.2
import QtQuick.Controls 1.2
import QtQuick.Dialogs 1.1
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
        onBarclicked:
        {
            if(m1.visible==false)
                m1.visible=true
            else
                m1.visible=false
            //m1.popup()
            console.log("ΠΑΤΗΘΗΚΑ")

        }
        Rectangle{
            id:m1
            width:parent.width
            height: nv.height*3
            anchors.bottom: nv.top
            visible: false
            color: "black"

            Rectangle{

                id:b1
                color:"black"
                anchors.left: parent.left
                height:parent.height
                width:parent.width/3
                border.color: "white"
                MouseArea{
                    anchors.fill: parent
                    onClicked: {
                        //messageDialog.visible=true
                       stackView.push(Qt.resolvedUrl("CustomerList.qml"),{checkin: 1})
                    }
                }
                Text{
                    id:t1
                    //anchors.top: parent.top

                    //width:parent.width
                    //height:parent.height/2
                    text: "Checkin"
                    font.bold: true
                    font.pixelSize: 25
                    //anchors.verticalCenter: parent.verticalCenter
                    anchors.horizontalCenter: parent.horizontalCenter
                    color:"white"

                }
                Image {
                    id:image1
                    anchors.bottom: parent.bottom
                    anchors.top:t1.bottom
                    anchors.right: parent.right

                    //anchors.rightMargin: 20
                    anchors.verticalCenter: parent.verticalCenter
                    width: parent.width
                    height:parent.height/2
                    fillMode: Image.PreserveAspectFit
                    source: "images/general/checkin.png"


                }
            }


            Rectangle{

                id:b2
                color:"black"
                anchors.left: b1.right
                height:parent.height
                width:parent.width/3
                border.color: "white"
                MouseArea{
                    anchors.fill: parent
                    onClicked: {
                      if(mainwindow.ordermode==0)
                        msg1.visible=true
                      else
                          qty.visible=true
                    }
                }
                Text{
                    id:t2
                    //anchors.top: parent.top

                    //width:parent.width
                    //height:parent.height/2
                    text: "Παραγγελία"
                    font.bold: true
                    font.pixelSize: 25
                    //anchors.verticalCenter: parent.verticalCenter
                    anchors.horizontalCenter: parent.horizontalCenter
                    color:"white"

                }
                Image {
                    id:image2
                    anchors.bottom: parent.bottom
                    anchors.top:t2.bottom
                    anchors.right: parent.right

                    //anchors.rightMargin: 20
                    anchors.verticalCenter: parent.verticalCenter
                    width: parent.width
                    height:parent.height/2
                    fillMode: Image.PreserveAspectFit
                    source: "images/general/order_new.png"


                }
            }

            Rectangle{
                id:b3

                color:"black"

                anchors.right: parent.right
                height:parent.height
                width:parent.width/3
                border.color: "white"
                MouseArea{
                    anchors.fill: parent
                    onClicked: {

                              if(mainwindow.ordermode!=0)
                                    stackView.push(Qt.resolvedUrl("Basket.qml"))
                            }

                    }

                Text{
                    id:t3
                    //anchors.top: parent.top

                    //width:parent.width
                    //height:parent.height/2
                    text: "Προβολή παραγγελίας"
                    font.bold: true
                    font.pixelSize: 25
                    //anchors.verticalCenter: parent.verticalCenter
                    anchors.horizontalCenter: parent.horizontalCenter
                    color:"white"

                }
                Image {
                    id:image3
                    anchors.bottom: parent.bottom
                    anchors.top:t3.bottom
                    anchors.right: parent.right

                    //anchors.rightMargin: 20
                    anchors.verticalCenter: parent.verticalCenter
                    width: parent.width
                    height:parent.height/2
                    fillMode: Image.PreserveAspectFit
                    source: "images/general/order_edit.png"


                }
            }



        }





    }

    Rectangle{
        id:msg1
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
            text: "Πρέπει να γίνει checkin!"
            font.bold: true
            font.pixelSize: 25
            //anchors.verticalCenter: parent.verticalCenter
            anchors.horizontalCenter: parent.horizontalCenter
            color:"white"

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
        }

    }
    QuantintyBox{
        id:qty
    }


}
