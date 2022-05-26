//Класс для рисования кругов(хранить радиус R и координаты x, y центра).
//Вычислять площадь круга и длину окружности.

#include "CPoint.h"
#include <iostream>
#include <math.h>
using namespace std;
CPoint::CPoint() :
	x(1.0), y(1.0), r(1.0)
{
	cout << "Конструктор по-умолчанию" << endl;
}
CPoint::CPoint(float x, float y, float r)
{
	CPoint::x = x;
	this->y = y;
	CPoint::r = r;
	cout << "Конструктор с параметрами: " << x << ", " << y << ", " << r << endl;
}
CPoint::~CPoint()
{
	cout << "Вызов деструктора" << endl;
}
void CPoint::print()
{
	cout << "Координаты точки: x = " << x << ", y = " << y << ", r = " << r << endl;
}
void CPoint::setX(float x)
{
	if (x < -1000.0 || x > 1000.0)
		cout << "Значение x некорректное!" << endl;
	else
		CPoint::x = x;
}
float CPoint::getX()
{
	return x;
}
void CPoint::setY(float y)
{
	if (y < -1000.0 || y > 1000.0)
		cout << "Значение y некорректное!" << endl;
	else
		CPoint::y = y;
}
float CPoint::getY()
{
	return y;
}
void CPoint::setR(float r)
{
	if (r < 0 || r > 1000.0)
		cout << "Значение r некорректное!" << endl;
	else
		CPoint::r = r;
}
float CPoint::getR()
{
	return r;
}

CPoint& CPoint::operator += (CPoint& pt)
{
	x += pt.x;
	y += pt.y;
	r += pt.r;
	return *this;
}
