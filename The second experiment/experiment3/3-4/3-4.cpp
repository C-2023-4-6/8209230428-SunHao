#include <iostream>
#include <iomanip>
#include "mytriangle.h"
using namespace std;
int main()
{
	cout << "请输入三角形的三边：";
	double a, b, c;
	while (true)
	{
		cin >> a >> b >> c;
		if (is_valid(a, b, c))
			break;
		else//输入的三边无法构成三角形，则做出提示，并要求重新输入
		{
			cout << "无法构成三角形，请重新输入：";
		}
	}
	cout << "它的面积是：" << area(a, b, c) << endl;
	return 0;
}


