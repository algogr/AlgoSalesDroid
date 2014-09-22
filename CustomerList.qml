import QtQuick 2.0
import SqlQueryModel 1.0


Rectangle {
    width: parent.width
    height: parent.height
    id: customerlist
    color: "#000000"
    property int checkin:0
    //anchors.fill: parent




    ListView {
        model: model.getCustomerList()
        width:parent.width
        height:parent.height*19/20
        delegate: CustomerListDelegate {
            name: modelData.name
            color:selectcolor()
            function selectcolor()
            {
                if (modelData.status=="***")
                    return "red";
                else
                    return "white";
            }


            onClicked: selectcustomer()
            function selectcustomer(){
                if(checkin==0)
                stackView.push(Qt.resolvedUrl("Customer.qml"),{selcusid:modelData.id});
                else
                {
                    mainwindow.ordermode=1
                    mainwindow.ordercusid=modelData.id
                    checkin=0
                    console.log("add1:"+mainwindow.ordercusid)
                    stackView.pop()

                }
            }
        }
    }
    SqlQueryModel {
        id: model


    Component.onCompleted: {
      model.opendb();

    }
    }
    NavigationBar
    {
        id:nv
        onClicked: stackView.pop();


    }

}
