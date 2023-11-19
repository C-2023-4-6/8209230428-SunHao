#include <iostream>
#include <string>
using namespace std;
int main()
{
	cout << "请输入一串字符：" << endl;
	string str;
	getline(cin, str); 
	char c;
	int number = 0, letter = 0, blank = 0, other = 0, i=0;
	for(i; i < str.size(); i++)
	{
		c = str[i];
		if (int(c) == 32)
			blank++;
		else
		{
			if ((int(c) >= 65 && int(c) <= 90) || (int(c) >= 97 && int(c) <= 122))
				letter++;
			else
			{
				if (int(c) >= 48 && int(c) <= 57)
					number++;
				else
				{
					other++;
				}
			}
		}
	}
	cout << "空格数有：" << blank << endl;
	cout << "字母数有：" << letter << endl;
	cout << "数字数有：" << number << endl;
	cout << "其他字符数有：" << other << endl;
	return 0;
}