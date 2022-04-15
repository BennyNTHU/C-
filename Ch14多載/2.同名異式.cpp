#include <iostream>
#include <cmath>
using namespace std;

/*
	�P�W�����S�٦h��(polymorphism),
	����¦���O�P�l�����O���h��"�ۦP�W�l"��"���P�\��"�����
	������O��t(��¦���O�P�l�����O)�����Y�@���f,�S�I�s�F���h�����
	��@���O�I�sf��,f�|�I�s"�P�@���O��"���h����� 
*/
class InchArea
{
	protected:
		double inch;
	public:
		InchArea(double in)
		{
			inch = in;
		}
		double getLength()	//�h��getLength��� 
		{
			return inch;
		}
		double getArea()	
		{
			return pow(getLength(), 2);	//�I�sInchArea��getLenth���� 
		}
};

class FeetArea: public InchArea
{
	protected:
		double feet;
	public:
		FeetArea(int ft): InchArea(ft*12)
		{
			feet = ft;
		}
		int getLength()	//�h��getLength��� 
		{
			return feet;
		}
};

int main()
{
	InchArea ia(5);
	cout << "����Ϊ�5�^�o, ���n = " << ia.getArea() << " ����^�o" << endl;	//ia��getArea��Ʒ|�h�I�sInchArea��getLenth���� 
	FeetArea fa(8);
	cout << "����Ϊ�8�^��, ���n = " << fa.getArea() << " ����^�o" << endl;	//ia��getArea����٬O�I�sInchArea��getLenth���� 
	
	system("PAUSE");
	return 0;
}

