#include <iostream>
using namespace std;
int main()
{
	int a, b;
	for (a = 1; a <= 5; a++)//总共有5行
	{
		for (b = 1; b <= a; b++)//循环一次输出一个*，每行的循环次数即为该行行数
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}