#include<iostream>
using namespace std;

/*
	�µ������:
	�p�G��¦���O�w�q�F�������,���l�����O�S���W����,�h�l�����O����N�ϥ�"��¦���O���������"
	 
	���p�G�n�s���l�����O����Ʀ���,����ϥΰ�¦���O���������
	���L�@�ӵ{���i�঳�@�j�����O,
	���i��@�@�ˬd�U�Ӫ���O�I�s����@�����O��������� 
	
	�]���ڭ̦b��¦���O���w�q�@��"�µ������",���L�����S���@��
	�o�ɦb�U�ӭl�����O���U�۩w�q�W�����,�N�٥h�F�ˬd���·� 
*/

/*
	��H��¦���O:
	�O���]�t�@�өΦh�ӯµ�����ƪ����O
	�i�H�⥦�Q���U�ӭl�����O��"�禡�W�ٸ�Ʈw", 
*/

class Base	//��H��¦���O 
{
	public:
		virtual void show() = 0;	//�µ������ 
};

class Derived1: public Base	//�~�ӤFBase���µ������ 
{
	public:
		void show()	//�W��show()��� 
		{
			cout << "�l�����O1" << endl; 
		}
};

class Derived2: public Base	//�~�ӤFBase���µ������
{
	public:
		void show()	//�W��show()��� 
		{
			cout << "�l�����O2" << endl; 
		}
};

int main()
{
	Base *list[2];
	Derived1 d1;
	Derived2 d2;
	
	list[0] = &d1;	//��Base���O������list[0]���Vd1����} 
	list[1] = &d2;	//��Base���O������list[1]���Vd2����} 
	
	list[0]->show();	//�ѩ�Base��show()��ƳQ�ŧi���µ������,�B���ФS���Vd1,�ҥH�|�I�sDerived1��show()��Ʀ��� 
	list[1]->show();	//�ѩ�Base��show()��ƳQ�ŧi���µ������,�B���ФS���Vd2,�ҥH�|�I�sDerived2��show()��Ʀ��� 
	
	system("PAUSE");
	return 0;
}
