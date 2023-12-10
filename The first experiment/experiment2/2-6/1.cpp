#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "请输入两个正整数：" << endl;
	cin >> a >> b;
	int c, d;
	//下面得出最大公因数
	for (c = 1; (c <= a) || (c <= b); c++)
	{
		if ((a % c == 0) && (b % c == 0))
			d = c;
	}
	cout << "两个数的最大公因数为：" << d << endl;
	//下面得出最小公约数
	int e, f, g=1;
	e = (a < b ? b : a);
	while (true)
	{
		if ((e % a == 0) && (e % b == 0))
		{
			f = e;
			break;
		}
		else e++;
	}
	cout << "两个数的最小公约数为：" << f << endl;
	return 0;
}