import QtQuick 2.0

Rectangle{
    property double balance
    property double checques
    property double plafon
    property double sales
    Canvas {
    id: root
    // canvas size

    width: parent.width; height: parent.height
    // handler to override for drawing
    onPaint: {
        // get context to draw with
        var scale=Math.max(balance,checques,plafon,sales)


        var ctx = getContext("2d")
        var pw=parent.width
        var ph=parent.height
        console.log(ph*balance/scale)
        console.log(ph)
        console.log(balance)
        console.log(scale)
        // setup the stroke
        ctx.lineWidth = 1
        ctx.strokeStyle = "lightgreen"
        // setup the fill
        ctx.fillStyle = "red"
        // begin a new path to draw
        ctx.beginPath()
        // top-left start point
        ctx.moveTo(pw/10,ph/10)
        ctx.lineTo(pw/10,ph*9/10)
        ctx.moveTo(pw/10,ph*9/10)
        ctx.lineTo(pw*9/10,ph*9/10)
        ctx.fillRect(pw*2/10,ph*(1-balance/scale),pw/10,ph*((balance/scale)-0.1))
        ctx.fillStyle = "yellow"
        ctx.fillRect(pw*4/10,ph*(1-checques/scale),pw/10,ph*((checques/scale)-0.1))
        ctx.fillStyle = "blue"
        ctx.fillRect(pw*6/10,ph*(1-plafon/scale),pw/10,ph*((plafon/scale)-0.1))
        ctx.fillStyle = "green"
        ctx.fillRect(pw*8/10,ph*(1-sales/scale),pw/10,ph*((sales/scale)-0.1))
        // upper line
        //ctx.lineTo(150,50)
        // right line
        //ctx.lineTo(150,150)
        // bottom line
        //ctx.lineTo(50,150)
        // left line through path closing
        ctx.closePath()
        // fill using fill style
        ctx.fill()
        // stroke using line width and stroke style
        ctx.stroke()
    }
}
}

