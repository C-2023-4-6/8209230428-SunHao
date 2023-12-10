#include <iostream>
using namespace std;
void merge(double* ip1[80], double* ip2[80], double* ip[160], int len1, int len2);
void swap(double* ip[160], int len1, int len2);
int main()
{
	double list1[80], list2[80], list_merged[160];
	double* list1_ip[80];
	double* list2_ip[80];
	double* list_ip[160];
	int length1, length2;
	cout << "�ֱ������������飬�������ݵĵ�һ�������������Ԫ�����������С������80��" << endl;
	cout << "Enter list1: ";
	for (int a = 0; a < 80; a++)
	{
		double b;
		cin >> b;
		if (a == 0)
			length1 = b;//��һ��������Ϊ�����Ԫ����
		else
		{
			list1[a - 1] = b;
			list1_ip[a - 1] = &list1[a - 1];
			if (a == length1)
				break;
		}
	}
	cout << endl;
	cout << "Enter list2: ";
	for (int a = 0; a < 80; a++)
	{
		double b;
		cin >> b;
		if (a == 0)
			length2 = b;//��һ��������Ϊ�����Ԫ����
		else
		{
			list2[a - 1] = b;
			list2_ip[a - 1] = &list2[a - 1];
			if (a == length2)
				break;
		}
	}
	for (int a = 0; a < 160; a++)
	{
		list_ip[a] = &list_merged[a];
	}
	merge(list1_ip, list2_ip, list_ip, length1, length2);//�ϲ�����
	swap(list_ip, length1, length2);//�Ժϲ������������
	cout << "The merged list is ";
	for (int c = 0; c < length1 + length2; c++)
	{
		cout << list_merged[c] << " ";
	}
	return 0;
}
void merge(double* ip1[80], double* ip2[80], double* ip[160], int len1, int len2)//����������ںϲ�����
{
	for (int i = 0; i < len1; i++)
	{
		*ip[i] = *ip1[i];
	}
	for (int k = len1; k < len1 + len2; k++)
	{
		*ip[k] = *ip2[k - len1];
	}
}
void swap(double* ip[160], int len1, int len2)//����������ڶ����������������
{
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < len1+len2-1; j++)
		{
			if (*ip[j] > *ip[j + 1])
			{
				double h = *ip[j];
				*ip[j] = *ip[j + 1];
				*ip[j + 1] = h;
				changed = true;
			}
		}
	} while (changed);
}