#include <iostream>
using namespace std;

/*
	��ڭ̱N
	1.��¦���O���󪺦�} �� 
	2.�l�����O���󪺦�} 
	�s�J��¦���O���󪺫���,
	�åH�����ЩI�s�P�W����(�h��)��virtual���,
	�����з|�̾ڪ������O,�s���A����� 
*/

class Base
{
	public:
		virtual void show()
		{
			cout << "��¦���O\n";
		}
};

class Derived1: public Base	//�~�ӤFBase,�֦��@��virtual��show()��ƻP�@�Ӵ��q��show��� 
{
	public:
		void show()
		{
			cout << "�l�����O1\n";
		}
};

class Derived2: public Base	//�~�ӤFBase,�֦��@��virtual��show()��ƻP�@�Ӵ��q��show��� 
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
	ptr->show();	//���"�l�����O1" 
	
	ptr = &d2;
	ptr->show();	//���"�l�����O2" 
	
	system("PAUSE");
	return 0;
}
