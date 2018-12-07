#include <windows.h>
#include <math.h>

#define PI  3.14159265

LRESULT CALLBACK WindowProcedure(HWND, UINT, WPARAM, LPARAM);
void OnPaint(HDC);

void DrawLine(HDC, int, int, int, int);
void DrawFlower(HDC, int, int, COLORREF);
void DrawTie(HDC, int, int, COLORREF);


int WINAPI WinMain(HINSTANCE hThisInstance, HINSTANCE hPrevInstance, LPSTR lpszArgument, int nFunsterStil)
{
	char szClassName[] = "DrawFlower";
	HWND hwnd;
	MSG msg;
	WNDCLASSEX wc = { 0 };

	wc.hInstance = hThisInstance;
	wc.lpszClassName = szClassName;
	wc.lpfnWndProc = WindowProcedure;
	wc.style = CS_DBLCLKS;
	wc.cbSize = sizeof (WNDCLASSEX);

	wc.hIcon = LoadIcon(NULL, IDI_APPLICATION);
	wc.hIconSm = LoadIcon(NULL, IDI_APPLICATION);
	wc.hCursor = LoadCursor(NULL, IDC_ARROW);
	wc.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);

	if (!RegisterClassEx(&wc)) return 0;

	//HWND hwnd;
	hwnd=CreateWindowEx(0, szClassName, szClassName, WS_OVERLAPPEDWINDOW, CW_USEDEFAULT, 0, CW_USEDEFAULT, 0, HWND_DESKTOP, NULL, hThisInstance, NULL);
	ShowWindow(hwnd, nFunsterStil);


	while (GetMessage(&msg, NULL, 0, 0))
	{
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}

	return msg.wParam;
}

LRESULT CALLBACK WindowProcedure(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
	PAINTSTRUCT ps;
	HDC hdc;

	switch (msg)
	{
	case WM_PAINT:
		hdc = BeginPaint(hwnd, &ps);
		OnPaint(hdc);
		EndPaint(hwnd, &ps);
		break;

	case WM_DESTROY:
		PostQuitMessage(0);
		break;

	default:
		return DefWindowProc(hwnd, msg, wParam, lParam);
	}

	return 0;
}

void OnPaint(HDC hdc)
{
	HPEN h;

	// »­ºûµû½á
	DrawTie(hdc, 195, 354, RGB(255, 0, 255));

	// »­Ö¦¸É
	h = CreatePen(PS_SOLID, 1, RGB(0, 255, 0));
	SelectObject(hdc, h);

	DrawLine(hdc, 189, 372, 180, 400);
	DrawLine(hdc, 310, 160, 325, 68);
	DrawLine(hdc, 310, 160, 187, 374);
	DrawLine(hdc, 150, 140, 189, 374);
	DrawLine(hdc, 430, 176, 190, 374);
	DrawLine(hdc, 370, 110, 187, 374);
	DrawLine(hdc, 250, 72, 189, 372);
	DrawLine(hdc, 253, 192, 190, 374);
	DrawLine(hdc, 189, 372, 187, 400);
	DrawLine(hdc, 189, 372, 182, 400);
	DrawLine(hdc, 189, 372, 200, 120);

	DeleteObject(h);

	// »­»¨¶ä
	DrawFlower(hdc, 320, 160, RGB(255, 0, 0));
	DrawFlower(hdc, 200, 120, RGB(0, 255, 0));
	DrawFlower(hdc, 150, 140, RGB(0, 0, 255));
	DrawFlower(hdc, 430, 176, RGB(255, 127, 0));
	DrawFlower(hdc, 370, 110, RGB(239, 179, 52));
	DrawFlower(hdc, 250, 72, RGB(235, 95, 186));
	DrawFlower(hdc, 325, 68, RGB(228, 119, 98));
	DrawFlower(hdc, 253, 190, RGB(247, 169, 117));
}

// »­»¨¶ä
void DrawFlower(HDC hdc, int x, int y, COLORREF c)
{
	int x1, y1, x2, y2;
	const int d = 30;
	double a, e;
	HPEN h;

	h = CreatePen(PS_SOLID, 1, c);
	SelectObject(hdc, h);

	for (a = 0; a < 2 * PI; a += PI / 360)
	{
		e = d * (1 + sin(a * 5));
		x1 = (int)(x + e * cos(a));
		y1 = (int)(y + e * sin(a));
		x2 = (int)(x + e * cos(a + PI / 5));
		y2 = (int)(y + e * sin(a + PI / 5));
		DrawLine(hdc, x1, y1, x2, y2);
	}

	DeleteObject(h);
}

// »­ºûµû½á
void DrawTie(HDC hdc, int x, int y, COLORREF c)
{
	int x1, y1, x2, y2;
	const int d = 100;
	double a, e;
	HPEN h;

	h = CreatePen(PS_SOLID, 1, c);
	SelectObject(hdc, h);

	for (a = 0; a < 2 * PI; a += PI / 360)
	{
		e = d * (1 + sin(a * 4));
		x1 = (int)(x + e * cos(a));
		y1 = (int)(y + e * sin(a) / 2);
		x2 = (int)(x + e * cos(a + PI / 9));
		y2 = (int)(y + e * sin(a + PI / 9) / 4.5);
		DrawLine(hdc, x1, y1, x2, y2);
	}

	DeleteObject(h);
}

//»­Ïß
void DrawLine(HDC hdc, int x1, int y1, int x2, int y2)
{
	MoveToEx(hdc, x1, y1, NULL);
	LineTo(hdc, x2, y2);
}