#include <iostream>
using namespace std;
int main()
{
	double a[10], b;
	int k = 0;
	cout << "Enter ten numbers: ";
	for (int i = 1; i <= 10; i++)//i����������֤����10�Σ�����������ʱ��a[k]��������ֵ��Ȼ��k+1
	{
		cin >> b;
		if (i == 1)//��1�����ֿ϶����Լ���
		{
			a[k] = b;
			k++;
		}
		else
		{
			for (int j = 0; j < k; j++)//�жϵ�i������֮ǰ�Ƿ�����ͬ���ּ�����
			{
				if (a[j] == b)
					break;
				else
				{
					if ((j == (k - 1)) && (a[k-1] != b))
					{
						a[k] = b;
						k++;
					}
				}
			}
		}
		
	}
	cout << "The distinct numbers are: ";
	for (int c = 0; c < k; c++)
	{
		cout << a[c] << '\t';
	}
	return 0;
}

