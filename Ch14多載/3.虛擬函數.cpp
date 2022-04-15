#include <iostream>
#include <cmath>
using namespace std;

#define PI 3.1415926f
 
/*
	�N�h����ƫŧi��virtual
	�h�sĶ���|���h����Ƥ��P������
	���P���O������,�N��̾ڦU�����O������,�Ӧs���A�����	
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
		virtual double getLength()	//����getLength��� 
		{
			return inch;
		}
		double getArea()	
		{
			return int(pow(getLength(), 2));	//�̾����O���ЧP�_�O�n�I�sInchArea��getLength�������,�٬OFeetArea��getLength������� 
		}
};

class FeetArea: public InchArea
{
	protected:
		double feet;
	public:
		FeetArea(double ft): InchArea(ft*12)
		{
			feet = ft;
		}
		virtual double getLength()	//�h��getLength��� 
		{
			return feet;
		}
};

int main()
{
	InchArea ia(5);		//�إ�InchArea����ia 
	cout << "����Ϊ�5�^�o, ���n = " << ia.getArea() << " ����^�o" << endl;	
	//ia��getArea���,�g�ѧP�_InchArea�����Ы�,�|�h�I�sInchArea��getLenth����
	 
	FeetArea fa(8);		//�إ�FeetArea����ia 
	cout << "����Ϊ�8�^��, ���n = " << fa.getArea() << " ����^��" << endl;
	//fa��getArea���,�g�ѧP�_FeetArea�������Ы�,�|�h�I�sFeetArea��getLenth���� 
	
	system("PAUSE");
	return 0;
}

