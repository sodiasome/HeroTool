import QtQuick 2.0
import QtCharts 2.2
Rectangle {
    id: root
    objectName:"testObj"
    property string info: "立得数据分析2024"
    property int timer: 0
    color: "#000C3C"
    width: 600;
    height: 600;
    function setValue(list_y,txt)
    {
        root.info = txt;
        spline.clear();
        axisY.min = Math.min.apply(null,list_y)
        axisY.max = Math.max.apply(null,list_y)

        for(var i=0;i<list_y.length;i++)
        {
            spline.append(i,list_y[i]);
        }
        console.log("----"+txt);
    }

    
    ChartView{
        id: chart
        anchors.fill: parent
        backgroundColor: "transparent"
        
        //theme: ChartView.ChartThemeBrownSand
        animationDuration: 500
        animationOptions:ChartView.SeriesAnimations
        
        antialiasing: true
        
        legend{
            visible: false
        }
        backgroundRoundness:0
        margins{
            left:0
            right:0
            top:0
            bottom:0
        }
        
        Rectangle {
            //不用透明图片方便复制粘贴代码
            id:value_area
            visible: value_text.visible
            anchors.centerIn: parent
            width: 60
            height: 30
            color: "black"
            opacity: 0.4
            radius: 3
        }
        
        Text {
            id: value_text
            visible: false
            anchors.centerIn: parent
            font.pixelSize: 14
            font.family: "Microsoft YaHei UI"
            //font.underline: true
            //font.weight: Font.DemiBold
            color: "white"
        }
        
    }
    
    //偷个懒，不用自己计算
    //保留一个隐藏的pie来计算角度
    ChartView{
        //anchors.fill: parent
        visible: false
        PieSeries {
            id: pie
            /*onHovered: {
                size=state?0.8:0.5
            }
            
            PieSlice {
                labelColor: "red"
                labelVisible: true
                //labelPosition: PieSlice.LabelInsideNormal
                label: "eaten"
                value: 94.9
            }
            */
        }
    }
    
    //根据{json}数据刷新
    //"data"数据为slice数组
    function updateChart(args){
        chart.removeAllSeries(); //清除之前数据
        
        if(args["data"]){
            var arg_data=args["data"];
            //console.log(arg_data);
            arg_data.sort(compare("value"));
            updatePie(arg_data);
            arg_data.reverse();
            for(var index in arg_data){
                //console.log(arg_data[index]["name"],arg_data[index]["value"])
                appendSlice(arg_data[index],index);
            }
        }
    }
    
    //先把参数给隐藏的pie计算角度
    function updatePie(args){
        pie.clear();
        for(var index in args){
            var newslice=pie.append(args[index]["name"]||"noname",args[index]["value"]||0);
        }
    }
    
    //添加slice，参数{json}
    function appendSlice(args,cut){
        //默认的pie不能每个slice一个半径，so每个slice单独一个pie
        var newpie = chart.createSeries(ChartView.SeriesTypePie, args["name"]||"noname");
        newpie.size=0.4+cut/20  //0.6
        newpie.holeSize=0
        
        var spanpie=pie.find(args["name"]||"noname")
        //startAngle没效果，且生成得slice得startAngle打印位undefine
        //so添加一个slice来挤过去
        //但是这个slice设置透明会使黑色，所以得先添加角度最大得slice
        //newpie.sartAngle=spanpie.startAngle
        newpie.endAngle=spanpie.startAngle+spanpie.angleSpan
        newpie.hovered.connect(function(aslice,state){
            //console.log(state)
            if(state){
                newpie.size+=0.03;
            }else{
                newpie.size-=0.03;
            }
        });
        
        var normallice=newpie.append(args["name"]||"noname",spanpie.startAngle);
        normallice.color="black";
        normallice.borderColor= "black";
        
        var newslice=newpie.append(args["name"]||"noname",spanpie.angleSpan);
        newslice.color=args["color"]||"white";
        newslice.borderWidth= 0;
        newslice.borderColor= args["borderColor"]||args["color"]||"black";
        //newslice.label=(args["name"]||"noname")+":"+Number(spanpie.percentage*100).toFixed(1)+"%";
        //newslice.labelPosition=PieSlice.LabelInsideHorizontal;
        newslice.labelArmLengthFactor=0;
        newslice.labelFont.pixelSize=12;
        newslice.labelVisible=true;
        newslice.labelColor= "white";
        newslice.hovered.connect(function(state){
            value_text.visible=state
            if(state){
                value_text.text=Number(spanpie.percentage*100).toFixed(1)+"%";
                newslice.borderColor=Qt.lighter(args["color"]||"white");
                newslice.labelColor= args["color"]||"white";
            }else{
                newslice.borderColor=args["color"]||"white";
                newslice.labelColor= "white";
            }
        });
        
    }
    
    //数组排序比较
    function compare(propertyname){
        return function(a,b){
            var value1 = a[propertyname]||0;
            var value2 = b[propertyname]||0;
            return value2 - value1;
        }
    }
    
    
    //测试用数据
    Component.onCompleted: {    
        updateChart({
            "data":[{
                    "name":"稳健",
                    "value":45,
                    "color":"#db497d"
                },{
                    "name":"进阶",
                    "value":35,
                    "color":"#ffc95f"
                },{
                    "name":"灵活",
                    "value":20,
                    "color":"#83f5f5"
                }]
        });
    }

    //饼状图
    //
    //ChartView {
    //    id:chart
    //    anchors.fill: parent
    //    //anchors.centerIn: parent
    //    animationDuration: 500
    //    animationOptions: ChartView.AllAnimations
    //    //view背景色
    //    backgroundColor: "transparent"
    //    //pie区域背景色
    //    backgroundRoundness:0
    //    margins{
    //        left:0
    //        right:0
    //        top:0
    //        bottom:0
    //    }
    //
    //    legend{
    //        visible: false
    //    }
    //    //抗锯齿
    //    antialiasing: true
    //
    //    PieSeries {
    //        id:pie
    //        size: 0.9
    //        holeSize: 0.6
    //        startAngle: 10
    //        endAngle: 360+10
    //
    //        property string defaultNameText: ""
    //        property string defaultValueText: ""
    //
    //        //hover选中
    //        //问题：不能配合mousearea使用，而且mousearea只能穿透/传递点击没有hover
    //        onHovered: {
    //            if(state){
    //                //slice,state
    //                name_text.text=slice.label;
    //                //占比保留一位小数
    //                value_text.text=Number(slice.value*100/pie.sum).toFixed(1)+"%";
    //            }else{
    //                name_text.text=defaultNameText;
    //                //占比保留一位小数
    //                value_text.text=defaultValueText;
    //            }
    //        }
    //    }
    //
    //    Column{
    //        anchors.verticalCenter: parent.verticalCenter
    //        anchors.horizontalCenter: parent.horizontalCenter
    //
    //        Text {
    //            id: name_text
    //            anchors.horizontalCenter: parent.horizontalCenter
    //            //text: pie.defaultNameText
    //            font.pixelSize: 12
    //            font.family: "Microsoft YaHei UI"
    //            //font.weight: Font.DemiBold
    //            color: "white"
    //        }
    //
    //        Text {
    //            id: value_text
    //            anchors.horizontalCenter: parent.horizontalCenter
    //            //text: pie.defaultValueText
    //            font.pixelSize: 16
    //            font.family: "Microsoft YaHei UI"
    //            //font.weight: Font.DemiBold
    //            color: "white"
    //        }
    //    }
    //}
    //
    ////根据{json}数据刷新
    ////"data"数据为slice数组
    ////"default"数据为默认展示对应的"name"
    //function updateChart(args){
    //    pie.clear(); //清除之前数据
    //    if(args["data"]){
    //        var arg_data=args["data"];
    //        for(var index in arg_data){
    //            appendSlice(arg_data[index]);
    //        }
    //    }
    //    if(args["default"]){
    //        defaultSlice(args["default"]);
    //    }
    //}
    //
    ////添加slice，参数{json}
    //function appendSlice(args){
    //    //添加新slice(label,value)
    //    var newslice=pie.append(args["name"]||"noname",args["value"]||0);
    //
    //    newslice.color=args["color"]||"white";
    //    newslice.borderWidth= 0;
    //    newslice.borderColor= args["borderColor"]||args["color"]||"black";
    //    //exploded距离
    //    newslice.explodeDistanceFactor= args["explodeDistanceFactor"]||0.1;
    //
    //    newslice.hovered.connect(function(state){
    //        newslice.exploded=state;
    //    });
    //}
    //
    ////设置默认展示的slice(slice.label)
    //function defaultSlice(name){
    //    var theslice=pie.find(name);
    //    if(theslice){
    //        pie.defaultNameText=name_text.text=theslice.label;
    //        pie.defaultValueText=value_text.text=Number(theslice.value*100/pie.sum).toFixed(1)+"%";
    //
    //    }
    //}
    //
    ////测试用数据
    //Component.onCompleted: {
    //    updateChart({
    //        "data":[{
    //                "name":"已完成",
    //                "value":23,
    //                "color":"#40a9af"
    //            },{
    //                "name":"其他",
    //                "value":77,
    //                "color":"#57d8de"
    //            }],
    //        "default":"已完成"
    //    });
    //}

    //折线图
    //
    //ChartView {
    //    id:chartView
    //    width: parent.width
    //    height: parent.height
    //    backgroundColor: "#000C3C"
    //    title: info
    //    titleColor: "white"
    //
    //    ValueAxis {
    //        id: axisX
    //        min: timer-20
    //        max: 10>timer? 10:timer+1
    //        tickCount: 11
    //        labelsColor: "white"
    //        labelsFont.pointSize: 13
    //        labelsFont.bold: true
    //        labelFormat: '%d'
    //        gridVisible: false
    //    }
    //    ValueAxis {
    //        id: axisY
    //        min:0
    //        max:50
    //        tickCount: 6
    //        labelsFont.pointSize: 13
    //        labelsFont.bold: true
    //        labelFormat: '%d'
    //        labelsColor: "white"
    //        gridLineColor: "#3379B7"
    //        titleText: "取值趋向"
    //    }
    //    LineSeries {
    //        id:lineSeries;
    //        axisX: axisX
    //        axisY: axisY
    //        color:"red"
    //        name: "参数分析"
    //        width:1
    //        pointsVisible: true
    //    }
    //    Timer{
    //        interval: 100
    //        running: true
    //        repeat: true
    //        onTriggered: {
    //            lineSeries.append(timer,Math.random()*50)
    //            timer = timer+1
    //        }
    //    }
    //}
}