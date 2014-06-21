import QtQuick 2.0
import SqlQueryModel 1.0
Rectangle {
    width: parent.width
    height: parent.height
    id: subcategorylist
    color: "#000000"
    //anchors.fill: parent
    property string selcatid

    SqlQueryModel {
        id: model


    Component.onCompleted: {
      model.opendb();

    }
    }

    ListView {
        model: model.getSubCategories(selcatid)
        //anchors.fill: parent
        width:parent.width
        height:parent.height*19/20
        delegate: AndroidDelegate {
            text: modelData.description
            onClicked: selectitem()
            function selectitem(){
                //subcategorylist.selitemid=modelData.id
                stackView.push(Qt.resolvedUrl("ProductList.qml"),{selsubcatid:modelData.id});
                console.log("modelid:"+modelData.id)
            }
        }
        Component.onCompleted: {
            console.log(selcatid);
        }
    }
    NavigationBar
    {
        id:nv
        onClicked: stackView.pop();


    }
}
