//�ڴ��ļ��н��к����Ķ���
#include <iostream>
#include <iomanip>
#include "student.h"
using namespace std;
void Student::set_value(int num, const char* name, const char sex)
{
	this->num = num;
	int len1 = strlen(name);
	this->sex = sex;
	strcpy_s(this->name, sizeof(name) - 1, name);
	this->name[sizeof(name) - 1] = '\0';
}
void Student::display()         //�����ⶨ��display�ຯ��
{
	cout << "num��" << setfill('0') << setw(3) << num << endl;
	cout << "name��" << name << endl;
	cout << "sex��" << sex << endl;
}