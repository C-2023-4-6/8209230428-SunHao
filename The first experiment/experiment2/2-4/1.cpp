#include <iostream>
using namespace std;
int main()
{
	float a, c;
	char b;
	cout << "请输入计算式：" << endl;
	cin >> a >> b >> c;
	switch (int(b))
	{
	case 43: cout << a + c;
		break;
	case 45: cout << a - c;
		break;
	case 42: cout << a * c;
		break;
	case 47:
	{
		if (c == 0)
			cout << "除数不能为0！" << endl;
		else cout << a / c;
	}
		break;
	default: cout << "表达式不合法！" << endl;
	}
	return 0;
}