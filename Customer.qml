import QtQuick 2.0
import QtQuick.Controls 1.2
import SqlQueryModel 1.0




Rectangle {
    property string selcusid
    property variant cusname
    property double sales
    signal findlocation
    //property variant cusbalance
    //property variant cuschecques

    //width: parent.width
    //height: parent.height
    id:pagecustomer
    color: "#000000"





    Rectangle{
        width:pagecustomer.width
        height: pagecustomer.height*2/20
        id: caption
        color:"#11ffffff"

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
            addTab("Οικονομική εικόνα",basicfindatatab)
            var c_tab=currentIndex;

            currentIndex=count-1;
            addTab("Καρτέλα",customertranstab)
            console.log("modelcus11111")
            currentIndex=count-1;
            //for (var i=0; i<attributes.length; i++){
            //var c_tab=currentIndex;
            addTab("Ανάλυση υπολοίπου",agingtab)
            currentIndex=count-1;
            addTab("Σταθερά στοιχεία",cusfixedtab)
            currentIndex=count-1;


            currentIndex=c_tab;
            //attributevalues=model.getAttributeValues(attributes[i].id);
            //t.item.attid=attributes[i].id
            //console.log(attributevalues.length);
            //t.item.color="blue";



            //balancetext.text="Yπόλοιπο : "+cusbalance





        }

        Component{
            id:basicfindatatab

            Rectangle{
            height:tabv1.height
            width:tabv1.width

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



            BasicCusFinDataChart{
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

        Component{
            id:customertranstab
            CustomerTrans{


                height:tabv1.height
                width:tabv1.width

                model1: model.getCustTransactions(selcusid)


            }


    }
        Component{
            id: agingtab
            Aging{
                height:tabv1.height
                width:tabv1.width
                model1: model.getAgingAnalysis(selcusid)

            }
        }

        Component{
            id: cusfixedtab
            CusFixedData{
                height:tabv1.height
                width:tabv1.width
                color: "black"
                street:"Διεύθυνση : "+model.getCustomerField(selcusid,"street")
                district:"Περιοχή : "+model.getCustomerField(selcusid,"district")
                city: "Πόλη : "+model.getCustomerField(selcusid,"city")
                phone1: "Τηλ 1 : "+model.getCustomerField(selcusid,"phone1")
                phone2: "Τηλ 2 : "+model.getCustomerField(selcusid,"phone2")
                fax:"Fax : "+model.getCustomerField(selcusid,"fax")
                email: "Email : "+model.getCustomerField(selcusid,"email")
                //onMapclicked: {
                  //  findlocation(streer,city)
                //}


            }
        }

    }






    NavigationBar
    {
        id:nv
        onClicked: stackView.pop();


    }




}


