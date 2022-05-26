//Класс для рисования кругов(хранить радиус R и координаты x, y центра).
//Вычислять площадь круга и длину окружности.

#pragma once
class CPoint
{
protected:
	float x;
	float y;
	float r;
public:
	CPoint();
	CPoint(float x, float y, float r);
	~CPoint();
	void print();
	void setX(float x);
	float getX();
	void setY(float y);
	float getY();
	void setR(float r);
	float getR();
	
	CPoint& operator += (CPoint& pt);
	friend void print_point(CPoint& pt);
};