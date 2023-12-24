#include <iostream>
#include <cstring>
using namespace std;
class StudentScore
{
private:
	char* id;
	char* name;
	float score;
public:
	StudentScore(const char* id = NULL, const char* name = NULL, float score = 0)//构造函数
	{
		this->id = new char[strlen(id) + 1];
		strncpy_s(this->id, strlen(id) + 1, id, strlen(id));
		this->name = new char[strlen(name) + 1];
		strncpy_s(this->name, strlen(name) + 1, name, strlen(name));
		this->score = score;
	}
	~StudentScore()//析构函数
	{
		if (id != NULL)
		{
			delete[] id;
			id = NULL;
		}
		if (name != NULL)
		{
			delete[] name;
			name = NULL;
		}
	}
	void max(StudentScore* Stu[5]);//该函数用于输出成绩最高学生的学号
};
void StudentScore::max(StudentScore* Stu[5])
{
	float MaxScore=0;
	char* MaxScoreStudent = new char[strlen(Stu[0]->id) + 1];
	for (int i = 0; i < 5; i++)
	{
		if (MaxScore < Stu[i]->score)
		{
			MaxScore = Stu[i]->score;
			strncpy_s(MaxScoreStudent, strlen(Stu[i]->id) + 1, Stu[i]->id, strlen(Stu[i]->id));
		}
	}
	cout << "成绩最高的学生的学号是：" << MaxScoreStudent << endl;
}
int main()
{
	StudentScore stu[5] = {
		StudentScore("8209230701","Zhang San", 92.5),
		StudentScore("8209230702","Li Si", 90),
		StudentScore("8209230703","Wang Wu", 77.5),
		StudentScore("8209230704","Zhao Liu", 80),
		StudentScore("8209230705","Liu Qi", 70),
	};
	StudentScore* Stu[5];
	for (int i = 0; i < 5; i++)
	{
		Stu[i] = &stu[i];
	}
	stu[0].max(Stu);
	return 0;
}