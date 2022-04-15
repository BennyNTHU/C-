#include <iostream>
#include <cmath>
using namespace std;

#define PI 3.1415926

class Cuboid
{
	public:
	int length;
	int height;
	int width;
	int area()
	{
		return 2 * (length * width + width * height + height * length);
	}
	int volumn()
	{
		return height * length * width;
	}
};

class Cylinder
{
	public:
	float radius;
	float height;
	float area()
	{
		return 2 * PI * radius * height;
	}
	float volumn()
	{
		return PI * float(pow(radius,2)) * height;
	}
};

int main(int argc, char *argv[])
{
	Cuboid rt = {6,8,10};
	cout << "������:\n";
	cout << "�� = " << rt.length << endl; 
	cout << "�e = " << rt.width << endl; 
	cout << "�� = " << rt.height << endl; 
	cout << "���n = " << rt.area() << endl; 
	cout << "��n = " << rt.volumn() << endl;
	
	Cylinder cl = {5.0, 10.0};
	cout << "��W��:\n";
	cout << "�b�| = " << cl.radius << endl; 
	cout << "�� = " << cl.height << endl; 
	cout << "���n = " << cl.area() << endl; 
	cout << "��n = " << cl.volumn() << endl;
	
	system("PAUSE");
	return 0;
}
