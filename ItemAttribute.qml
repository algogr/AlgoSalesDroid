import QtQuick 2.0
import SqlQueryModel 1.0


    Rectangle{
    id:root
    //property alias text: attrtext1.text
    //property alias color: root.color
    property string attid
    //anchors.fill: parent
    width: parent.width
    height: parent.height
    color:"black"
    /*
    Text{
        id:attrtext1
        //anchors.top: parent
        text: "1200x1500"
    }

    Text{
        id:attrtext2
        anchors.top:attrtext1.bottom
        color: "black"
        text: "1200x1300"
    }
    */

    ListView {
        model: model.getAttributeValues(attid)
        anchors.fill: parent
        delegate: AttributeValuesDelegate {
            text: "<ul><li>"+modelData.description+"</li></ul>"
            image1: modelData.image1
            onClicked: selectitem()
            function selectitem(){
                //subcategorylist.selitemid=modelData.id
                stackView.push(Qt.resolvedUrl("StockItem.qml"),{selitemid:modelData.id});
                console.log(modelData.id);
            }
        }
    }
    SqlQueryModel {
        id: model



    }

    }

