#include <iostream>
using namespace std;

/*
	��ڭ̱N
	1.��¦���O���󪺦�} �� 
	2.�l�����O���󪺦�} 
	�s�J��¦���O���󪺫���,�åH�����ЩI�s�P�W����(�h��)�����,
	�����Ф@�w�|���V��¦���O,�B���O�I�s��¦���O���P�W��� 
*/

class Base
{
	public:
		void show()
		{
			cout << "��¦���O\n";
		}
};

class Derived1: public Base
{
	public:
		void show()
		{
			cout << "�l�����O1\n";
		}
};

class Derived2: public Base
{
	public:
		void show()
		{
			cout << "�l�����O2\n";
		}
};

int main()
{
	Base b;
	Derived1 d1;
	Derived2 d2;
	Base *ptr;
	
	ptr = &b;
	ptr->show();	//���"��¦���O" 
	
	ptr = &d1;
	ptr->show();	//���"��¦���O" 
	
	ptr = &d2;
	ptr->show();	//���"��¦���O" 
	
	system("PAUSE");
	return 0;
}
