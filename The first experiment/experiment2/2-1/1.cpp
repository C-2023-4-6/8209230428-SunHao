#include <iostream>
using namespace std;
int main()
{
	char i;
	int j, k;
	cout << "ÇëÊäÈëÒ»¸ö×Ö·û£º" << endl;
	cin >> i;
	if (97 <= int(i) && int(i) <= 122)
	{
		k = int(i);
		k -= 32;
		cout << char(k);
	}
	else
	{
		j = int(i) + 1;
		cout << j << endl;
	}
	return 0;
}