#include <iostream>
#include <cmath>
using namespace std;

#define PI 3.1415926

struct Cuboid
{
	int length;
	int width;
	int height;
};

int area(Cuboid r)
{
	return 2 * (r.length * r.width
			+ r.width * r.height 
			+ r.height * r.length);
}

int volume(Cuboid r)
{
	return r.height*r.length*r.width;
}

int main (int argc, char *argv[])
{
	Cuboid rt = {6,8,10};
	
	cout << "������:\n";
	cout << "�� = " << rt.length << endl; 
	cout << "�e = " << rt.width << endl; 
	cout << "�� = " << rt.height << endl; 
	cout << "���n = " << area(rt) << endl; 
	cout << "��n = " << volume(rt) << endl;
	
	system ("PAUSE");
	return 0; 
 } 
 
