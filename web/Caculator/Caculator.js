function Caculator(){
    this.jisuan=function(number1,number2,opera){
        var res=0;
        switch(opera){
            case '+':res=number1+number2;break;
            case '-':res=number1-number2;break;
            case '*':res=number1*number2;break;
            case '/':res=number1/number2;break;
        }
        return res;
    }
}
//创建对象
var caculator=new Caculator();
//定义全局变量
var val=0;//放入输入的值
var xval=0;//保存转换number类型的值
var temp=0;//保存第一次输入的值
var oper='';//保存操作符
//获取输入的值
function inputEvent(e){
    val=e.value;
    var xsval=document.getElementById("inp1");
    xsval.value+=val;//连续输入数字（string类型）
    //转换Number类型
    xval=parseFloat(xsval.value);
}
function inputPCB(e){
    //window.alert(e.value);
    var xsval=document.getElementById("inp1");
    if(e.value=="Clear"){
        xscal.value="";
    }else if(e.value=="Back"){

    }
}
//输入操作符
function inputOper(e){
    oper=e.value;
    if(e.value=="+"){
        var xsval=document.gerElementById("inp1");
        //保存上次计算的结果，并对字符串进行转换->Number类型
        temp=parseFloat(xsval.value);
        //第一次输入的值设置为空
        xsval.value="";
    }else if(e.value=="-"){
        var xsval=document.getElementById("inp1");
        temp=parseFloat(xsval.value);
        xsval.value="";
    }else if(e.value=="*"){
        var xsval=document.getElementById("inp1");
        temp=parseFloat(xsval.value);
        xsval.value="";
    }else if(e.value=="/"){
        var xsval=document.getElementById("inp1");
        temp=parseFloat(xsval.value);
        xsval.value="";
    }
}
//计算结果
function inputEquel(e){
    var xsval=document.getElementById("inp1");
    if(e.value=="="){
        xsval.value=caculator.jisuan(temp,xval,oper);
    }
}
