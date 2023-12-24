#include <iostream>
#include "student.h"
using namespace std;
int main()
{
	Student stud;
	stud.set_value(7, "tcg", 'm');                //定义对象
	stud.display();              //执行stud对象的display函数
	return 0;
}