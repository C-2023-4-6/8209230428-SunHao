#include <iostream>
using namespace std;
int main()
{
	float a, b, c;
	cout << "请输入三角形的三边：" << endl;
	cin >> a >> b >> c;
	if (a < b + c && b < a + c && c < a + b)//满足构成三角形的条件
	{
		if (a == b || a == c || b == c)
			cout << "该三角形是等腰三角形！";
		else cout << "该三角形不是等腰三角形！";
	}
	else
		cout << "不构成三角形！";
	return 0;
}

