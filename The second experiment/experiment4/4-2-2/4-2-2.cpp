#include <iostream>
#include <cstring>
#include <cmath>
int parseHex(const char* const hexString);
using namespace std;
int main()
{
	char hexString[100];
	char* hexString_ip = hexString;
	cout << "������һ��ʮ����������";
	cin.getline(hexString, 100);
	cout << "ʮ����Ϊ��" << parseHex(hexString_ip) << endl;
	return 0;
}
int parseHex(const char* const hexString)
{
	int length = strlen(hexString);
	int intString = 0;
	for (int i = 0; i < length; i++)
	{
		int number;
		if (65 <= int(hexString[i]) && int(hexString[i]) <= 70)//��A-Fת��Ϊ10-15
		{
			number = int(hexString[i]) - 55;
		}
		else
			number = int(hexString[i]) - 48;//1-9��ASCIIֵ��48-57
		intString = intString + number * (pow(16, (length - i - 1)));
	}
	return intString;
}