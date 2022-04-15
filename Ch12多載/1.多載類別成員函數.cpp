#include <iostream>
using namespace std;

class Cuboid
{
	private:
		int length;
		int width;
		int height;
	
	public:
		void setSide(int l, int w)	//�]�w�������� 
		{
			length = l;
			width = w;
			height = 0;
		}
		void setSide(int l, int w, int h)	//�]�w���������
		{
			length = l;
			width = w;
			height = h;
		}
		int area()
		{
			if (height == 0)
				return length * width;
			else
				return 2*(length*width+width*height+height*length);
		 } 
 };
 
int main()
{
	Cuboid rt, cb;
	rt.setSide(6, 8);
	cb.setSide(6,8,10);
	
	cout << "����έ��n = " << rt.area() << "���褽��" << endl;
	cout << "��������n = " << cb.area() << "���褽��" << endl;
	
	system("PAUSE");
	return 0; 
} 

