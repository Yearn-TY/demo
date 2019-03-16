
var arr=document.querySelector(".box-page");
for(var n=0;n<arr.length;n++){
    //wai ceng bian li hang 
    for(var r=0;r<3;r++){
        //nei ceng bian li lie
        for(var c=0;c<3;c++){
            var divs=document.creatElement("div");
            divs.style.cssText="width:100px;height:100px;border:2px solid #fff;box-sizing:border-box;position:absolution;background-image:external(img/"+n+".jpg)backfround-size:300px;";
            arr[n].appendChild(divs);
        }
    }
}