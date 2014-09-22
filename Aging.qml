import QtQuick 2.0


Rectangle {
   id: root
   color: "black"
   property alias model1: aginganalysis.model


   ListView{
       id: aginganalysis
       width:parent.width
       height: parent.height
       delegate: AgingDelegate{
           year:modelData.year
           month: modelData.month
           amount:Number(modelData.amount).toLocaleString(Qt.locale("el_GR"))




       }

   }

}
