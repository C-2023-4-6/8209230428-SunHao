#include <iostream>
using namespace std;
class Point
{
private:
	int x, y;
public:
	Point()
	{
		x = 60;
		y = 80;
	}
	void setPoint(int i, int j);
	void display();
};
void Point::setPoint(int i, int j)
{
	x = x + i;
	y = y + j;
}
void Point::display()
{
	cout << "�޸ĺ������ֵΪ��" << "(" << x << "," << y << ")" << endl;
}
int main()
{
	cout << "���޸�����ֵ��" << endl;
	int i, j;
	cout << "xֵ�ı䣺";
	cin >> i;
	cout << "yֵ�ı䣺";
	cin >> j;
	Point point;
	point.setPoint(i, j);
	point.display();
	return 0;
}