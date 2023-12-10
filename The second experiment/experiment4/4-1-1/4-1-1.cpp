#include <iostream>
using namespace std;
int main()
{
	double a[10], b;
	int k = 0;
	cout << "Enter ten numbers: ";
	for (int i = 1; i <= 10; i++)//i来计数，保证输入10次，当满足条件时，a[k]等于输入值，然后k+1
	{
		cin >> b;
		if (i == 1)//第1个数字肯定可以计入
		{
			a[k] = b;
			k++;
		}
		else
		{
			for (int j = 0; j < k; j++)//判断第i个数字之前是否有相同数字计入了
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

