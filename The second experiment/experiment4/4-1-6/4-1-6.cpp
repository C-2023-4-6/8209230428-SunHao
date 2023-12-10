#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
void count(const char s[], int* counts[26]);
int main()
{
	char s[100];
	int counts[26];
	int* counts_ip[26];
	cout << "Enter a string: ";
	cin.getline(s, 100);
	for (int a = 0; a < strlen(s); a++)//将所有大写字母转换为小写，小写字母不变，方便计数
	{
		s[a] = tolower(s[a]);
	}
	for (int b = 0; b < 26; b++)
	{
		counts[b] = 0;
		counts_ip[b] = &counts[b];
	}
	count(s, counts_ip);
	for (int c = 0; c < 26; c++)
	{
		if (counts[c] > 1)
			cout << char(c + 97) << ":" << counts[c] << " times" << endl;
		else
		{
			if (counts[c] == 1)//英语语法，1 time, n(>1) times
				cout << char(c + 97) << ":" << "1 time" << endl;
		}
	}
	return 0;
}
void count(const char s[], int* counts[26])
{
	for (int i = 0; i < strlen(s); i++)
	{
		if (97 <= int(s[i]) && int(s[i]) <= 122)
		{
			int letter = int(s[i]);
			*counts[letter-97] += 1;
		}
	}
}