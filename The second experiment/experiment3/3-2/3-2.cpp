#include <iostream>
using namespace std;
bool zhishu(int x);
int main()
{
	for (int i = 2, k = 1; i <= 200; i++)
	{
		if (zhishu(i))
		{
			cout << i << '\t';
			if (k >= 10 && k % 10 == 0)//�����ʮ������ͻ���
			{
				cout << endl;
			}
			k++;
		}
	}
	return 0;
}
bool zhishu(int x)
{
	if (x == 2)
		return true;
	else
	{
		for (int y = 2; y < x; y++)//�ܱ�����1���Լ���������������������
		{
			if (x % y == 0)
			{
				return false;
			}
		}
		return true;
	}
}

