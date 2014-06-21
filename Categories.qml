import QtQuick 2.0
import SqlQueryModel 1.0

Rectangle {
    width: parent.width
    height: parent.height
    id: categorylist
    color: "#000000"
    //anchors.fill: parent


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

    ListView {
        model: model.getCategories()

        anchors.bottom: nv.top
        //anchors.fill: parent
        width: parent.width
        height: parent.height*19/20
        delegate: AndroidDelegate {
            text: modelData.description
            onClicked: selectcategory()
            function selectcategory(){

                stackView.push(Qt.resolvedUrl("SubCategories.qml"),{selcatid:modelData.id});
            }
        }
    }
}
