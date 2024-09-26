import QtQuick 2.3
import QtQuick.Window 2.3
import QtQuick.Controls 2.3
import QtQuick.Controls.Styles 1.4

import test.conrtrol 1.0

Rectangle {
    id: root
    width: 120; height: 240
    color: "#4A4A4A"

    MouseArea{
        anchors.fill: parent;
        onClicked: {
            console.log("按钮被点击了");
        }
    }

    Text {
        y: triangle.y + triangle.height + 20
        width: root.width
        color: 'black'
        horizontalAlignment: Text.AlignHCenter
        text: '灵魂三角'
        font.family: "Helvetica"
        font.pointSize: 24
    }
    //画布元素
    Canvas {
        width: 200; height: 200
        // 绘图事件
        onPaint: {
            //获取绘制内容（2D对象）
            var ctx = getContext("2d")

            // setup the stroke 画笔
            ctx.strokeStyle = "red"

            // create a path 路径
            ctx.beginPath()
            ctx.moveTo(50,50)
            ctx.lineTo(150,50)
            ctx.lineTo(200,50)
            ctx.lineTo(170,100)
            ctx.closePath() 

            // stroke path
            ctx.stroke()
        }
    }
}
