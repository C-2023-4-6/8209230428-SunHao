#include <iostream>
using namespace std;
void swap(double* ip[10]);
int main()
{
	double list[10];
	double* list_ip[10];
	cout << "输入十个数：";
	for (int a = 0; a < 10; a++)
	{
		double b;
		cin >> b;
		list[a] = b;
	}
	for (int c = 0; c < 10; c++)
	{
		list_ip[c] = &list[c];
	}
	swap(list_ip);
	cout << "由小到大排序为：";
	for (int f = 0; f < 10; f++)
	{
		cout << list[f] << '\t';
	}
	return 0;
}
void swap(double* ip[10])//起泡排序
{
	bool changed = true;
	do
	{
		changed = false;
		for (int d = 0; d < 9; d++)
		{
			if (*ip[d] > *ip[d + 1])
			{
				double e = *ip[d];
				*ip[d] = *ip[d + 1];
				*ip[d + 1] = e;
				changed = true;
			}
		}
	}
	while (changed);
}
