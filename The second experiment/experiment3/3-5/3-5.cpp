#include <iostream>
using namespace std;
unsigned int jisuan(int taozi);
int main()
{
	cout << "第一天猴子摘了" << jisuan(1) << "个桃子。" << endl;
	return 0;
}
unsigned int jisuan(int day)
{
	int taozi;
	if (day == 10)//第十天发现只有1个桃子，说明第十天没有吃
	{
		taozi = 1;
	}
	else
		taozi = (jisuan(day + 1) + 1) * 2;
	return taozi;
}