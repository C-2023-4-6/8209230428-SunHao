#include <iostream>
#include <cstring>
using namespace std;
int indexof(const char* s1, const char* s2);
int main()
{
	char s1[100], s2[100];
	char* s1_ip = s1;
	char* s2_ip = s2;
	cout << "Enter the first string: ";
	cin.getline(s1, 100);
	cout << "Enter the second string: ";
	cin.getline(s2, 100);
	cout << "indexOf(��" << s1 << "��,��" << s2 << "��) is: " << indexof(s1_ip, s2_ip);
	return 0;
}
int indexof(const char* s1, const char* s2)
{
	int length1 = strlen(s1);
	int length2 = strlen(s2);
	if (length1 > length2)
		return -1;//���s1���ȱ�s2����s1��������s2�����ַ���
	else
	{
		for (int i = 0; i <= length2 - length1; i++)
		{
			int match = 0;
			for (int k = 0, j = i; k < length1; k++, j++)
			{
				if (s1[k] == s2[j])
					match++;
			}
			if (match == length1)//��s1��s2��Ӧ���ַ���ͬʱ��match++�����ж���length1���ַ������match=length1����ôs1��Ϊs2�����ַ���
				return i;
		}
		return -1;
	}
}