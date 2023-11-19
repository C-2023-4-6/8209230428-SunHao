#include <iostream>
using namespace std;
int main()
{
	int a, b;//a代表天数，b代表每天买的个数
	float c = 0;//c代表总价钱
	for (a = 1, b = 2; b <= 100; b *= 2, a += 1)
	{
		c = c + 0.8 * b;
	}
	cout << "平均每天花" << c / a << "元" << endl;
	return 0;
}