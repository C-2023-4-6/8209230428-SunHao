#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float a, b;
	cout << "输入华氏温度：" << endl;
	cin >> a;
	b = 5 * (a - 32) / 9;
	cout << "摄氏温度为：" << fixed << setprecision(2) << b << endl;
	return 0;
}