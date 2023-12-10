#include <iostream>
using namespace std;
int main()
{
	const float Π = 3.1415926535;
	float r, h, V;
	cout << "请输入圆锥底的半径：" << endl;
	cin >> r;
	cout << "请输入圆锥的高：" << endl;
	cin >> h;
	V = (Π * (r * r) * h) / 3;
	cout << "圆锥的体积为：" << V << endl;
	return 0;
}