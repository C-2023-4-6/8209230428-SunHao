#include <iostream>
#include <iomanip>
#include "mytriangle.h"
using namespace std;
int main()
{
	cout << "�����������ε����ߣ�";
	double a, b, c;
	while (true)
	{
		cin >> a >> b >> c;
		if (is_valid(a, b, c))
			break;
		else//����������޷����������Σ���������ʾ����Ҫ����������
		{
			cout << "�޷����������Σ����������룺";
		}
	}
	cout << "��������ǣ�" << area(a, b, c) << endl;
	return 0;
}


