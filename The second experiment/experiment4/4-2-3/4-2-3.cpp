#include <iostream>
using namespace std;
void swap(double* ip, int a);
int main()
{
	int number;
	cout << "����Ԫ�ظ�����";
	cin >> number;
	double* shuzu = new double[number];
	cout << "��������Ԫ�أ�";
	for (int i = 0; i < number; i++)
	{
		double a;
		cin >> a;
		shuzu[i] = a;
	}
	swap(shuzu, number);
	for (int j = 0; j < number; j++)
	{
		cout << shuzu[j] << " ";
	}
	delete[] shuzu;
	return 0;
}
void swap(double* ip, int a)//�˺������ڸ���������
{
	bool changed = true;
	do
	{
		changed = false;
		for (int k = 0; k < a - 1; k++)
		{
			if (ip[k] > ip[k + 1])
			{
				double c = ip[k];
				ip[k] = ip[k + 1];
				ip[k + 1] = c;
				changed = true;
			}
		}
	} while (changed);
}