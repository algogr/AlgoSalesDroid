import QtQuick 2.0
import SqlQueryModel 1.0
import QtQuick.Controls 1.2


Rectangle {

    width: parent.width
    height: parent.height
    id: subcategorylist
    color: "#000000"
    //anchors.fill: parent
    property string selsubcatid

    SqlQueryModel {
        id: model


    Component.onCompleted: {
      model.opendb();

    }
    }

    ListView {
        model: model.getProductsbySub(selsubcatid)
        //anchors.fill: parent
        width:parent.width;
        height:parent.height*19/20
        delegate: ItemListDelegate {
            text: modelData.description
            onClicked: selectitem()
            function selectitem(){
                //subcategorylist.selitemid=modelData.id
                stackView.push(Qt.resolvedUrl("StockItem.qml"),{selitemid:modelData.id});
                console.log(modelData.id);
            }
        }

    }
    NavigationBar
    {
        id:nv






        onClicked: stackView.pop();

}



}
