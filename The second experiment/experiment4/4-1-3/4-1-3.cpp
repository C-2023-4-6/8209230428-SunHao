#include <iostream>
using namespace std;
void change(double* ip[100]);
int main()
{
	double L[100];
	double* L_change[100];
	for (int a = 0; a < 100; a++)//最开始所有柜门都是关闭的
	{
		L[a] = false;
		L_change[a] = &L[a];
	}
	change(L_change);
	cout << "开启的柜门编号为：" << endl;
	for (int e = 0; e < 100; e++)
	{
		if (L[e] == true)
			cout << e + 1 << '\t';
	}
	return 0;
}
void change(double* ip[100])
{
	for (int c = 1; c <= 100; c++)//c代表第几个学生
	{
		for (int d = c; d <= 100; d = d + c)//d代表第几个柜子
		{
			if (*ip[d - 1] == false)
				*ip[d - 1] = true;
			else *ip[d - 1] = false;
		}
	}
}
