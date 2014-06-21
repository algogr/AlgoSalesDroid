import QtQuick 2.0



Component {
    Rectangle{
            id:innerrect
            color:"black"

    Image {
        id:itemimage
        width: parent.width
        height: parent.height

        fillMode: Image.PreserveAspectFit
        source:"qrc:///images/products/smartouch-i.jpg"
        MouseArea{
            id: ms1
            anchors.fill: parent
            onPressed: { console.log("me patisan");
            //parent.state = (parent.state == "enlarge")

            if (parent.state!="enlarge")
            {
            parent.state="enlarge";
                //caption.visible=false;
            }

            else
            {
             parent.state="*";
            console.log(page.width)
            }
            }

        }
        states:[
        State {
            name: "enlarge"
            PropertyChanges {
                target: tabv1
                width: page.height; height: page.width;

               x: 0 ; y: 0
               anchors.fill: page
            }
        }
        ]
        transitions: [
            Transition {
                from: '*'; to: 'enlarge';reversible: true
                SequentialAnimation {
                    NumberAnimation { properties: "x,y,width,height"; duration: 400; easing.type: Easing.OutQuad }
                }
            }
        ]
    }
}
}

