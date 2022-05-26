//����� ��� ��������� ������(������� ������ R � ���������� x, y ������).
//��������� ������� ����� � ����� ����������.

#include "CPoint.h"
#include <iostream>
#include <math.h>
using namespace std;
CPoint::CPoint() :
	x(1.0), y(1.0), r(1.0)
{
	cout << "����������� ��-���������" << endl;
}
CPoint::CPoint(float x, float y, float r)
{
	CPoint::x = x;
	this->y = y;
	CPoint::r = r;
	cout << "����������� � �����������: " << x << ", " << y << ", " << r << endl;
}
CPoint::~CPoint()
{
	cout << "����� �����������" << endl;
}
void CPoint::print()
{
	cout << "���������� �����: x = " << x << ", y = " << y << ", r = " << r << endl;
}
void CPoint::setX(float x)
{
	if (x < -1000.0 || x > 1000.0)
		cout << "�������� x ������������!" << endl;
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
		cout << "�������� y ������������!" << endl;
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
		cout << "�������� r ������������!" << endl;
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
