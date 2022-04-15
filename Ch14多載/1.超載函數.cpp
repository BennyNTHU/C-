#include <iostream>
using namespace std;

/*
	�W����ƫ����O�b�l�����O�����s�w�q�@�ӻP��¦���O��������Ƥ@�˦W�l
	���ѼƭӼƩΰѼƫ��A�i�ण�P����� 
*/

class Base
{
	private:
		int a, b;
	public:
		Base(int l, int m)
		{
			a = 1;
			b = m;
		}
		void show()
		{
			cout << "a = " << a << endl;
			cout << "b = " << b << endl;
		}
 };
 
class Derived: public Base
{
	private:
		int c;
	public:
		Derived(int l, int m, int n): Base(l, m)
		{
			c = n;
		}
		void show()	//�W��show()��� 
		{
			Base::show();
			cout << "c = " << c << endl;
		}
} ;

int main()
{
	Derived d(2,3,5);
	d.show();
	
	system("PAUSE");
	return 0;
}

