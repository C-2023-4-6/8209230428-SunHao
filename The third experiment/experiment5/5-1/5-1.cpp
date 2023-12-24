#include<iostream>
using namespace std;
class Time          // 定义Time类
{
private:            // 数据成员改为私有的
	int hour;
	int minute;
	int sec;
public:
	Time()          //将输入的功能改为由成员函数实现
	{
		cin >> hour >> minute >> sec;
	}
	void ShowTime() //将输出的功能改为由成员函数实现
	{
		cout << hour << "：" << minute << "：" << sec << endl;
	}
};
int main()
{
	Time t1;          //定义t1为Time类对象
	t1.ShowTime();
	return 0;
}