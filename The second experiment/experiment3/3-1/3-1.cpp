#include <iostream>
using namespace std;
int& gongyinshu(int x, int y);
int& gongbeishu(int x, int y);
int main()
{
	cout << "������������Ȼ����";
	int a, b, m, n;
	while (true) //ȷ���������������Ȼ��
	{
		cin >> a >> b;
		if (a >= 0 && b >= 0)
		{
			m = a;
			n = b;
			break;
		}
		else
			cout << "����������������Ȼ����";
	}
	int yinshu = gongyinshu(m, n);
	int beishu = gongbeishu(m, n);
	cout << "���ǵ���������ǣ�" << yinshu << endl;
	cout << "���ǵ���С�������ǣ�" << beishu << endl;
	return 0;
}
int& gongyinshu(int x, int y)//���������
{
	int z1;
	for (int i = 1; i <= x && i <= y; i++)
	{
		if ((x % i == 0) && (y % i == 0))
			z1 = i;
	}
	return z1;
}
int& gongbeishu(int x, int y)//����С������
{
	int i, z2;
	i = (x > y ? y : x);
	while (true)
	{
		if (i % x == 0 && i % y == 0)
		{
			z2 = i;
			break;
		}
		i++;
	}
	return z2;
}

