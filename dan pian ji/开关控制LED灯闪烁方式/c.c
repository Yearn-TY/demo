#include<reg51.h>
#define uint unsigned int
#define uchar unsigned char
sbit SW=P3^0;
void delay_1ms(uint);//延时子程序
main()
{
    while(1){
        SW=1;
        if(SW==1){
            P0=0x00;P2=0x01;//点亮P0.0,熄灭P2.0
            delay_1ms(1000);//调用延时一秒子程序
            P0=0x01;P2=0x00;//熄灭P0.0,点亮P2.0
            delay_1ms(1000);//调用延时1s的子程序
        }
        else{
            P0=0x00;P2=0x00;//点亮P0.0 and P2.0
            delay_1ms(1000);//调用延时1s的子程序
            P0=0x01;P2=0x01;//熄灭P0.0和P2.0
            delay_1ms(1000);//调用延时一秒的子程序
        }
    }
}

//================延时一秒的子程序===========================
void delay_1ms(uint x)
{
    uchar j;
    while(x--){
        for(j=0;j<120;j++);//空语句循环体
    }
}