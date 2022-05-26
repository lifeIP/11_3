//����� ��� ��������� ������(������� ������ R � ���������� x, y ������).
//��������� ������� ����� � ����� ����������.

#include <iostream>
#include "CPoint.h"
using namespace std;
void print_point(CPoint& pt);
int main()
{
    setlocale(LC_ALL, "RUS");
    CPoint pt;
    CPoint* pt2 = new CPoint(1.0, 2.0, 3.0);
    
    cout << "pt:" << endl;
    pt.print();
    pt.setX(2000);
    pt.setY(10);
    pt.setR(5);
    cout << "pt:" << endl;
    pt.print();
    print_point(pt);

    cout << "pt2:" << endl;
    pt2->print();
    
    CPoint pt3;
    pt3 = pt += *pt2;
    cout << "pt:" << endl;
    pt.print();
    cout << "pt3:" << endl;
    pt3.print();
    delete pt2;
    cout << "����� ���������" << endl;
}
void print_point(CPoint& pt)
{
    cout << "����� ��������� ����� (������������� �������): " << endl;
    cout << "x = " << pt.x << ", y = " << pt.y << ", z = " << pt.r << endl;
}