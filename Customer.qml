import QtQuick 2.0
import QtQuick.Controls 1.2
import SqlQueryModel 1.0




Rectangle {
    property string selcusid
    property variant cusname
    property double sales
    //property variant cusbalance
    //property variant cuschecques

    width: parent.width
    height: parent.height
    id:pagecustomer
    color: "#000000"


    SqlQueryModel {
        id: model


        Component.onCompleted: {
            model.opendb();
            console.log("modelcus")
            cusname=model.getCustomerField(selcusid,"name")
            //sales=model.getCustomerField(selcusid,"sales")

            //prdescr=model.getProductField(selitemid,"description");
            //attributes=[]
            //attributes=model.getProductAttrs(selitemid);

        }
    }


    Rectangle{
        width:pagecustomer.width
        height: pagecustomer.height*2/20
        id: caption
        color:"#11ffffff"

        Text{
            id:custext
            text:"Επωνυμία : "+cusname
            font.pixelSize: 25
            width:parent.width
            wrapMode: Text.WordWrap
            color: "white"

        }

    }


    TabView {

        id: tabv1
        //clip: true
        tabPosition: Qt.BottomEdge
        //height: page.height*5/6
        height: pagecustomer.height*17/20
        width: pagecustomer.width
        y: parent.height*2/20
        //anchors.top: caption.bottom
        //anchors.bottom: parent.bottom
        //anchors.left: parent.left
        //anchors.right: parent.right

        Component.onCompleted: {
            console.log("modelcus1")
            //cusbalance=model.getCustomerField(selcusid,"balance")
            //cuschecques=model.getCustomerField(selcusid,"openchecques")
            addTab("Οικονομική εικόνα",basicfindata)
            var c_tab=currentIndex;

            currentIndex=count-1;
            addTab("Οικονομική εικόνα1")
            //for (var i=0; i<attributes.length; i++){
            var c_tab=currentIndex;

            currentIndex=count-1;
            //attributevalues=model.getAttributeValues(attributes[i].id);
            //t.item.attid=attributes[i].id
            //console.log(attributevalues.length);
            //t.item.color="blue";

            currentIndex=c_tab;

            //balancetext.text="Yπόλοιπο : "+cusbalance





        }
        Rectangle{
            id:basicfindata
            height:parent.height
            width:parent.width

            BasicCusFinData{
                id:findata
                height: parent.height
                width: parent.width/2
                color: "black"
                balance: Number(model.getCustomerField(selcusid,"balance")).toLocaleString(Qt.locale("el_GR"))
                checques: Number(model.getCustomerField(selcusid,"openchecques")).toLocaleString(Qt.locale("el_GR"))
                plafon: Number(model.getCustomerField(selcusid,"plafon")).toLocaleString(Qt.locale("el_GR"))
                sales: Number(model.getCustomerField(selcusid,"sales")).toLocaleString(Qt.locale("el_GR"))
            }



            BasicFinDataChart{
                id:findatachart
                balance: model.getCustomerField(selcusid,"balance")
                checques: model.getCustomerField(selcusid,"openchecques")
                plafon: model.getCustomerField(selcusid,"plafon")
                sales: model.getCustomerField(selcusid,"sales")
                height: parent.height
                width: parent.width/2
                Component.onCompleted: {
                    anchors.right=parent.right

                    color= "black"


                }
            }
        }
    }




    NavigationBar
    {
        id:nv
        onClicked: stackView.pop();


    }


}


