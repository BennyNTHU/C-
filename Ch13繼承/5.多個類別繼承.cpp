#include <iostream>
using namespace std;

class PointXY
{
	protected:
		int x, y;
	
	public:
		void setxy(int n, int m)
		{
			x = n;
			y = m;
		}
		
};

class PointZ 
{
	protected:
		int z;
		
	public:	
		void setz(int o)
		{
			z = o;
		}
};

class Cube: public PointXY, public PointZ	//�P���~�ӤFPointXY�PPointz 
{
	public:
		void showxy()
		{
			cout << "�����y�� : p(" << x << ", " << y << ") " << endl;
		}
		void showxyz()
		{
			cout << "�Ŷ��y�� : s(" << x << ", " << y << ", " << z << ") " << endl;
		}
		void showarea()
		{
			cout << "���n = " << x * y << endl; 
		}
		void showcube()
		{
			cout << "��n = " << x * y * z << endl; 
		}
};

int main(void)
{
	Cube p;
	p.setxy(2, 5);
	p.showxy();
	p.showarea();
	cout << endl;
	p.setz(8);
	p.showxyz();
	p.showcube();
	
	system("PAUSE");
	return 0;
}

