import QtQuick 2.0
import SqlQueryModel 1.0


Rectangle {
   id: root
   color: "black"
   property string custranid

   Text {
           id: matcode
           color: "white"
           width: parent.width/6
           font.pixelSize: 15
           text: "Κωδικός"
           anchors.top: parent.top
           anchors.verticalCenter: parent.verticalCenter
           anchors.left: parent.left
           //anchors.leftMargin: 30
       }

       Text {
           id: matdescription
           color: "white"
           width: parent.width/6
           font.pixelSize: 15
           text: "Περιγραφή"
           anchors.top: parent.top
           anchors.verticalCenter: parent.verticalCenter
           anchors.left: matcode.right
           //anchors.leftMargin: 30
       }

       Text {
           id: qty
           color: "white"
           width: parent.width/6
           font.pixelSize: 15
           text:"Ποσότητα"
           anchors.top: parent.top
           anchors.verticalCenter: parent.verticalCenter
           anchors.left: matdescription.right
           horizontalAlignment: Text.AlignRight
           //anchors.leftMargin: 30
       }

       Text {
           id: price
           color: "white"
           width: parent.width/6
           font.pixelSize: 15
           text:"Τιμή"
           anchors.top: parent.top
           anchors.verticalCenter: parent.verticalCenter
           anchors.left: qty.right
           horizontalAlignment: Text.AlignRight
           //anchors.leftMargin: 30
       }

       Text {
           id: discount
           color: "white"
           width: parent.width/6
           font.pixelSize: 15
           text: "Έκπτωση"
           anchors.top: parent.top
           anchors.verticalCenter: parent.verticalCenter
           anchors.left: price.right
           horizontalAlignment: Text.AlignRight
           //anchors.leftMargin: 30
       }

       Text {
           id: value
           color: "white"
           width: parent.width/6
           font.pixelSize: 15
           text: "Αξία"
           anchors.top: parent.top
           anchors.left: discount.right
           anchors.verticalCenter: parent.verticalCenter
           anchors.right: parent.right
           horizontalAlignment: Text.AlignRight
       }



   ListView{
       id: transactionitems
       width:parent.width
       height: parent.height
       model:model.getTransactionItems(custranid)
       delegate: TransactionItemsDelegate{
           matcode: modelData.matcode
           matdescription: modelData.matdescription
           qty: modelData.qty
           //price: Number(modelData.price.toLocaleString(Qt.locale("el_GR")))
           price: Number(modelData.price).toLocaleString(Qt.locale("el_GR"))
           discount: Number(modelData.discount).toLocaleString(Qt.locale("el_GR"))
           //discount:modelData.discount
           value: Number(modelData.value).toLocaleString(Qt.locale("el_GR"))

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
