#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	cout << "请输入一个数：";
	long double a, b, c;
	cin >> a;
	if (a > 0)//a为正数时利用迭代法求平方根
	{
		b = a;
		c = (b + a / b) / 2;//先计算一次，得到c值
		for (b; b - c >= 1e-5 || b - c <= -1e-5; )
		{
			b = c;
			c = (b + a / b) / 2;
		}
		cout << "平方根为" << fixed << setprecision(6) << c << endl;
	}
	else
	{
		if (a == 0)
			cout << "平方根为0" << endl;
		else cout << "负数没有平方根" << endl;
	}
	return 0;
}