import QtQuick 2.0
import SqlQueryModel 1.0


Rectangle {
    width: parent.width
    height: parent.height
    id: basket
    color: "#ffffff"
    visible:false
    //property int checkin:0
    //anchors.fill: parent




    ListView {
        model: model.getBasketList()
        width:parent.width
        height:parent.height*19/20
        delegate: BasketDelegate {
            code: modelData.code
            description: modelData.description
            quantity: modelData.quantity

    }


    SqlQueryModel {
        id: model


    Component.onCompleted: {
      model.opendb();

    }
    }


}
    NavigationBar
    {
        id:nv
        onClicked: stackView.pop();
        anchors.bottom: parent.bottom;

    }
}
