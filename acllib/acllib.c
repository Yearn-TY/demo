//#include"acllib.h"
//#include<stdio.h>
//int Setup()
//{
//	initConsole();
//	printf("输入宽度：");
//	int width;
//	scanf("%d",&width);
//	initWindow("test",DEFAULE,DEFAULT,width,width);
//	beginPaint();
//	setPenColor(BLUE);
//	setPenWidth(1);
//	setPenStyle(PEN_STYLE_DASHDOTDOT);
//	line(20,20,width-20,width-20);
//	putPixel(100,150,RGB(255,0,255));
//	endPaint();
//	return 0;
//}





////画心 
//#include "acllib.h"
//
//#include <stdio.h>
//
//#include<math.h>
//
//int Setup()
//
//{
//
//	https://初始化窗口位置和大小
//
//	initWindow("不会编程的单身汪不是好的程序猿", 0, 0, 500, 550);
//
//	beginPaint();
//
//	//放大系数a
//
//	int a = 100;
//
//	//遍历直角坐标系中x变量
//	double x = -2;
//	for (; x <= 2; x = x + 0.01)
//
//	{
//
//		//直角坐标系中y变量
//
//		double y = sqrt(2 * sqrt(x*x) - x * x);
//
//		//直角坐标系中z变量
//
//		double z = asin((fabs(x) - 1)) - 3.141592 / 2;
//
//		//直角坐标系变换到屏幕坐标系
//
//		int real_x = (int)(x * a + 250);
//
//		int real_y = (int)(y * a*(-1) + 150);
//
//		int real_z = (int)(z * a * (-1) + 150);
//
//		//画笛卡尔心型曲线上半部
//
//		putPixel(real_x, real_y, RGB(255, 0, 0));
//
//		//画笛卡尔心型曲线下半部
//		putPixel(real_x, real_z, RGB(0, 0, 255));
//	}
//	endPaint();
//	return 0;
//}

//发散星 
//#include <stdio.h>
//#include <math.h>
//#include "acllib.h"
//#define PI 3.14159
//#define A 360
//int Setup()
//{
// int width = 250;
// initWindow( "Text", DEFAULT, DEFAULT, 4*width, 3*width );
// beginPaint();
// moveTo( 200, 350 );
// setPenColor( BLUE );
// int i = 0, angle = 0; 
// for( ; i < 45; i ++, angle += 184 ) {
//  lineRel( 600.0 * cos(1.0*(angle%A)/(A/2)*PI), -600.0 * sin(1.0*(angle%A)/(A/2)*PI) );
// }
// endPaint();
//  
// return 0;
//}



//多而杂的图画 
//#include <acllib.h>
//#include <stdio.h>
//#include <math.h>
// 
//POINT trans(POINT p, int angle, int x0, int y0) {
//    double rad = angle / 180.0*3.14159;
//    double cosr = cos(rad);
//    double sinr = sin(rad);
//    POINT res;
//    p.x -= x0;
//    p.y -= y0;
//    res.x = (LONG)round(cosr * p.x - sinr * p.y) + x0;
//    res.y = (LONG)round(sinr*p.x + cosr * p.y) + y0;
//    return res;
//}
// 
// 
//int Setup() {
//    initWindow("draw", 0, 0, 1000, 750);
//    beginPaint();
//    constexpr int steps = 12;
//    POINT p[] = { {500,375},{600,400},{650,525},{700,575},{750,375},{695,775},{1000,625} };
//    POINT tmp[7];
//    POINT rel = { -100,-100 };
//    rel = trans(rel, 0, 0, 0);
// 
//    for (int i = 0; i < 7; ++i) {
//        p[i].x += rel.x;
//        p[i].y += rel.y;
//    }
// 
//    polyBezier(p, 7);
//    setPenColor(RGB(255, 0, 0));
//    setPenWidth(2);
//    for (int i = 0; i < 360; i += steps) {
//        for (int j = 0; j < 7; ++j) tmp[j] = trans(p[j], i, 500, 375);
//        polyBezier(tmp, 7);
//        POINT rel_trans = trans(rel, i, 0, 0);
//        for (int k = 0; k < 5; ++k) {
//            for (int j = 0; j < 7; ++j) tmp[j] = trans(tmp[j], 25, 500 + rel_trans.x, 375 + rel_trans.y);
//            polyBezier(tmp, 7);
//        }
//    }
//    setPenColor(RGB(0, 0, 255));
//    for (int i = 4; i < 360; i += steps) {
//        for (int j = 0; j < 7; ++j) tmp[j] = trans(p[j], i, 500, 375);
//        polyBezier(tmp, 7);
//        POINT rel_trans = trans(rel, i, 0, 0);
//        for (int k = 0; k < 5; ++k) {
//            for (int j = 0; j < 7; ++j) tmp[j] = trans(tmp[j], 25, 500 + rel_trans.x, 375 + rel_trans.y);
//            polyBezier(tmp, 7);
//        }
//    }
//    setPenColor(RGB(255, 255, 0));
//    for (int i = 8; i < 360; i += steps) {
//        for (int j = 0; j < 7; ++j) tmp[j] = trans(p[j], i, 500, 375);
//        polyBezier(tmp, 7);
//        POINT rel_trans = trans(rel, i, 0, 0);
//        for (int k = 0; k < 5; ++k) {
//            for (int j = 0; j < 7; ++j) tmp[j] = trans(tmp[j], 25, 500 + rel_trans.x, 375 + rel_trans.y);
//            polyBezier(tmp, 7);
//        }
//    }
//     
//    endPaint();
// 
//    return 0;
//}



