import QtQuick 2.0


Rectangle {
   id: root
   color: "black"
   property alias model1: transactions.model

   Text {
           id: trndate
           color: "white"
           width: parent.width/6
           font.pixelSize: 15
           text: "Ημερομηνία"
           anchors.top: parent.top
           anchors.verticalCenter: parent.verticalCenter
           anchors.left: parent.left
           anchors.leftMargin: 30
       }

       Text {
           id: tradecode
           color: "white"
           width: parent.width/6
           font.pixelSize: 15
           text: "Παραστατικό"
           anchors.top: parent.top
           anchors.verticalCenter: parent.verticalCenter
           anchors.left: trndate.right
           anchors.leftMargin: 30
       }

       Text {
           id: debit
           color: "white"
           width: parent.width/6
           font.pixelSize: 15
           text:"Χρέωση"
           horizontalAlignment: Text.AlignRight
           anchors.top: parent.top
           anchors.verticalCenter: parent.verticalCenter
           anchors.left: tradecode.right
           anchors.leftMargin: 30
       }

       Text {
           id: credit
           color: "white"
           width: parent.width/6
           font.pixelSize: 15
           text: "Πίστωση"
           horizontalAlignment: Text.AlignRight
           anchors.top: parent.top
           anchors.verticalCenter: parent.verticalCenter
           anchors.left: debit.right
           anchors.leftMargin: 30
       }

       Text {
           id: balance
           color: "white"
           width: parent.width/6
           font.pixelSize: 15
           text: "Υπόλοιπο"
           horizontalAlignment: Text.AlignRight
           anchors.top: parent.top
           anchors.verticalCenter: parent.verticalCenter
           anchors.left: credit.right
           anchors.leftMargin: 30
       }



   ListView{
       id: transactions
       width:parent.width
       height: parent.height
       delegate: CustomerTransDelegate{
           trndate: modelData.trndate
           tradecode: modelData.tradecode
           debit: Number(modelData.debit).toLocaleString("el_GR")
           credit:Number(modelData.credit).toLocaleString("el_GR")
           balance: Number(modelData.balance).toLocaleString("el_GR")
           onClicked: {
               console.log('mimi:'+modelData.id)
               stackView.push(Qt.resolvedUrl("TransactionItems.qml"),{custranid:modelData.id});
           }


       }

   }

}
