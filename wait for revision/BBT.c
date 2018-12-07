#include <stdio.h>
#include <Windows.h>
int main()
{
char title[200];	//用于保存窗口的标题
RECT rect;	//矩型结构体
HWND hWnd;	//窗口的句柄
POINT pt;	//坐标点
HDC hdc;	//窗口设备环境，包括了画刷、画笔等等
HPEN hPen;	//画笔
int i;

GetConsoleTitleA(title, 200);	//获取窗口标题
hWnd = FindWindowA(NULL, title);	//获取窗口句柄
GetClientRect(hWnd, &rect);	//获取窗口客户区矩型
pt.x = rect.right / 2;
pt.y = rect.bottom / 2;
hdc = GetDC(hWnd);	//获取窗口DC
//先画棒
Rectangle(hdc, pt.x - 10, pt.y, pt.x + 10, pt.y + 200);	//画一个宽为50像素高为200像素的一根棒棒
 //再画糖
//使用空的画刷
SelectObject(hdc, GetStockObject(NULL_BRUSH));
for (i = 1; i <= 100; i++)
{
hPen = CreatePen(PS_SOLID, 1, RGB(10 * i % 256, 20 * i % 256, 30 * i % 256));	//1.创建画笔
SelectObject(hdc, hPen);	//2.选入设备环境当中
Ellipse(hdc, pt.x - i, pt.y - i, pt.x + i, pt.y + i);	//3.画圆
DeleteObject(hPen);	//4.销毁画笔
}
getchar();
return 0;
} 