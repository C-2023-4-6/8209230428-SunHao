#include <iostream>
using namespace std;
int main()
{
	float x, y;
	cout << "输入x值：x=" ;
	cin >> x;
	if (x <= 0 || x >= 10)
		cout << "请输入大于0小于10的一个数！";
	else
	{
		if (0 < x && x < 1)
		{
			y = 3 - 2*x;
			cout << "y=" << y << endl;
		}
		else
		{
			if (1 <= x && x < 5)
			{
				y = 2 / (4 * x) + 1;
				cout << "y=" << y << endl;
			}
			else
			{
				y = x * x;
				cout << "y=" << y << endl;
			}
		}
	}
	return 0;
}
