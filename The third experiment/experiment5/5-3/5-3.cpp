#include <iostream>
using namespace std;
class Cuboid
{
private:
	double length, width, height;
public:
	Cuboid()
	{
		cin >> length >> width >> height;
	}
	void ShowVolume();
};
void Cuboid::ShowVolume()
{
	double volume;
	volume = length * width * height;
	cout << volume << endl;
}
int main()
{
	cout << "��ֱ���������������ĳ���ߣ�" << endl;
	Cuboid cuboid1;
	Cuboid cuboid2;
	Cuboid cuboid3;
	cout << "���������������ֱ�Ϊ��" << endl;
	cuboid1.ShowVolume();
	cuboid2.ShowVolume();
	cuboid3.ShowVolume();
	return 0;
}

