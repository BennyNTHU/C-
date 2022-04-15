#include <iostream>
#include <cmath>
using namespace std;

#define PI 3.1415926

class Cuboid
{
	private:
	int length;
	int height;
	int width;
	
	public:
	void setCuboid(int l, int w, int h)
	{
		length = l;
		width = w;
		height = h;
	}
	int getLength()
	{
		return length;
	}
	int getWidth()
	{
		return width;
	}
	int getHeight()
	{
		return height;
	}
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
	private:
	float radius;
	float height;
	
	public:
	void setCylinder(float r, float h)
	{
		radius = r;
		height = h;
	}
	float getRadius()
	{
		return radius;
	}
	float getHeight()
	{
		return height;
	}
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
	Cuboid rt;
	rt.setCuboid(6,8,10);
	cout << "������:\n";
	cout << "�� = " << rt.getLength() << endl; 
	cout << "�e = " << rt.getWidth() << endl; 
	cout << "�� = " << rt.getHeight() << endl; 
	cout << "���n = " << rt.area() << endl; 
	cout << "��n = " << rt.volumn() << endl;
	
	Cylinder cl;
	cl.setCylinder(5.0,10.0);
	cout << "��W��:\n";
	cout << "�b�| = " << cl.getRadius() << endl; 
	cout << "�� = " << cl.getHeight() << endl; 
	cout << "���n = " << cl.area() << endl; 
	cout << "��n = " << cl.volumn() << endl;
	
	system("PAUSE");
	return 0;
}
