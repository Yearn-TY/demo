#include<reg52.h>
sbit LED1=P1^0;  //LED1的P1端口置0，灭
sbit LED2=P1^1; //LED2的P1端口置1，亮
//============延时函数==============
void delay()
{
    int z;
    z=1000000;
    while(z>0) //循环100000次，起到延时作用
    {
        z=z-1;
    }
}
//============主函数===============
void main()
{
    While(1)  //一直循环
    {
        LED1=0;//LED1端口为0，灭
        LED2=1;//LED2亮
        delay();  //调用延时函数
        LED1=1;  //LED1亮
        LED2=0;  //LED2灭
        delay();  //延时
    }
}
