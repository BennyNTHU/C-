#include <iostream>
using namespace std;

/*
	���]��¦���OA���@��Ʀ���i
	�B����Ӥl���OB�PC,��D���O�~�ӤFB�PC
	����D�n�s��i���ɭ�,�sĶ���|�����D�O"A-C-D"�٬O"A-B-D"���~�Ӹ��|�ӥX�{���~ 
	�o�O�ѩ�B�PC�����Шä��O���V�P�@�Ӱ�¦���O
	���F�ѨM�o�ت��p,B�PC�~��A�ɶ��ϥ�"�����~��",�Ϩ�̪����г����V�P�@�Ӱ�¦���O 
*/

class Base
{
	protected:
		int i;
};

class Derived1: virtual public Base
{
	protected:
		int j;
};

class Derived2: virtual public Base
{
	protected:
		int k;
};

class Derived3: public Derived1, public Derived2
{
	protected:
		int sum;
		
	public:
		Derived3(int n1, int n2, int n3)
		{
			i = n1;		//���ɦ]��Derived1�PDerived2�����VBase,�ҥH�i���`�s��i 
			j = n2;
			k = n3;
			sum = i + j + k;
		}
		void show()
		{
			cout << "i = " << i << endl;
			cout << "j = " << j << endl;
			cout << "k = " << k << endl;
			cout << "sum = " << sum << endl;
		}
};

int main()
{
	Derived3 d3(10, 20, 30);
	d3.show();
	
	system("PAUSE");
	return 0;
}
