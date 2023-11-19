#include <iostream>
using namespace std;
int main()
{
	int i, k;
	k = 1;//原代码未赋值k,此处改正
	i = k + 1;
	cout << i++ << endl;
	i = 1;
	cout << i++ << endl;
	cout << "Welcome to C++" << endl;
	return 0;
}