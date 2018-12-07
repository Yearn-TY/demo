//C语言==全民飞机大战
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#define N 35 //宏定义 宏参 宏值
//数组是用来存储一堆相同数据类型的数据
int str[22][N]={0},width=24;//用来限制玩的区域

void show(int a[][N])//显示飞机、子弹、分隔线
{
	system("cls");//清空
	int i,j;//循环遍历行和列
	for(i=0;i<22;i++)//行的遍历
	{
		a[i][width-1]=4;
		for(j=0;j<width;j++)//列的遍历
		{
			if(a[i][j]==0)printf(" ");//输出空格
			if(a[i][j]==1)printf("\5");//输出我的飞机符号
			if(a[i][j]==2)printf(".");//输出子弹符号
			if(a[i][j]==3)printf("\4");//输出敌人的飞机符号
			if(a[i][j]==4)printf("|");//分隔线
		}
		printf("\n");
	}
	Sleep(80);
}
int main()
{
	str[21][10]=1;//等于1，打印我的飞机
	
	str[0][10]=3;
	while(1)
	{
		show(str);
	}
	return 0;
}
