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
	cout << "请分别输入三个长方体的长宽高：" << endl;
	Cuboid cuboid1;
	Cuboid cuboid2;
	Cuboid cuboid3;
	cout << "三个长方体的体积分别为：" << endl;
	cuboid1.ShowVolume();
	cuboid2.ShowVolume();
	cuboid3.ShowVolume();
	return 0;
}

