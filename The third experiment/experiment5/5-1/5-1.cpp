#include<iostream>
using namespace std;
class Time          // ����Time��
{
private:            // ���ݳ�Ա��Ϊ˽�е�
	int hour;
	int minute;
	int sec;
public:
	Time()          //������Ĺ��ܸ�Ϊ�ɳ�Ա����ʵ��
	{
		cin >> hour >> minute >> sec;
	}
	void ShowTime() //������Ĺ��ܸ�Ϊ�ɳ�Ա����ʵ��
	{
		cout << hour << "��" << minute << "��" << sec << endl;
	}
};
int main()
{
	Time t1;          //����t1ΪTime�����
	t1.ShowTime();
	return 0;
}