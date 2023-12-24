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
	cout << "修改后的坐标值为：" << "(" << x << "," << y << ")" << endl;
}
int main()
{
	cout << "请修改坐标值：" << endl;
	int i, j;
	cout << "x值改变：";
	cin >> i;
	cout << "y值改变：";
	cin >> j;
	Point point;
	point.setPoint(i, j);
	point.display();
	return 0;
}