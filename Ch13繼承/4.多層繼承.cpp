#include <iostream>
using namespace std;

class TwoD
{
	protected:
		int x, y;
	
	public:
		void setxy(int n, int m)
		{
			x = n;
			y = m;
		}
		void showxy()
		{
			cout << "�����y�� : p(" << x << ", " << y << ") " << endl;
		}
};

class ThreeD: public TwoD
{
	protected:
		int z;
		
	public:
		void setz(int o)
		{
			z = o;
		}
		void showxyz()
		{
			cout << "�Ŷ��y�� : s(" << x << ", " << y << ", " << z << ") " << endl;
		}
};

class Cube: public ThreeD	//�P���~�ӤFTwoD�PThreeD 
{
	public:
		void showarea()
		{
			cout << "���n = " << x * y << endl; 
		}
		void showcube()
		{
			cout << "��n = " << x * y * z << endl; 
		}
};
//�p�G�H��n�ί}�a�̨�Ʈ�,�O�o���إߪ̫�}�a 

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

