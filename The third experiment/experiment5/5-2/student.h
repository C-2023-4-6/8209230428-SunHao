//����ͷ�ļ����ڴ��ļ��н����������
class Student             //������
{
public:                   //���ó�Ա����ԭ������
	void set_value(int num, const char* name, const char sex);
	void display();
private:
	int num;
	char name[20];
	char sex;
};