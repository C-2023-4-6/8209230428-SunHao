#include <iostream>
using namespace std;
unsigned int jisuan(int taozi);
int main()
{
	cout << "��һ�����ժ��" << jisuan(1) << "�����ӡ�" << endl;
	return 0;
}
unsigned int jisuan(int day)
{
	int taozi;
	if (day == 10)//��ʮ�췢��ֻ��1�����ӣ�˵����ʮ��û�г�
	{
		taozi = 1;
	}
	else
		taozi = (jisuan(day + 1) + 1) * 2;
	return taozi;
}