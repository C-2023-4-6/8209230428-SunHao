#include <iostream>
#include <cstring>
#include <cmath>
int parseHex(const char* const hexString);
using namespace std;
int main()
{
	char hexString[100];
	char* hexString_ip = hexString;
	cout << "请输入一个十六进制数：";
	cin.getline(hexString, 100);
	cout << "十进制为：" << parseHex(hexString_ip) << endl;
	return 0;
}
int parseHex(const char* const hexString)
{
	int length = strlen(hexString);
	int intString = 0;
	for (int i = 0; i < length; i++)
	{
		int number;
		if (65 <= int(hexString[i]) && int(hexString[i]) <= 70)//将A-F转化为10-15
		{
			number = int(hexString[i]) - 55;
		}
		else
			number = int(hexString[i]) - 48;//1-9的ASCII值是48-57
		intString = intString + number * (pow(16, (length - i - 1)));
	}
	return intString;
}