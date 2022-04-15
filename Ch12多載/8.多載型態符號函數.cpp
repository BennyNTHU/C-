#include <iostream>
using namespace std;

/*	�h�����A�Ÿ����:
	�J��h���Ÿ���ƪ��ɾ��D�n�O�b��ƫ��A�������ഫ��
	
								�ت�(���)��m		�ӷ�(�e��)��m 
	1.�򥻫��A��򥻫��A:		C++���ب��         C++���ب�� 
	2.�򥻫��A�����O���A:		�ϥΫإߪ̨�� 		�L 
	3.���O���A��򥻫��A:		�L					�ϥΦh�����A�Ÿ���� 
	4.���O���A�����O���A:		�ϥΫإߪ̨��		�ϥΦh�����A�Ÿ����
	
	1.�b�H�e�N�ǹL�Q��int(), float()�����h�� 
	2.�P�إߪ̨�Ʀ��� 
	�ҥH�ڭ̭n�����Q��3�P4,�H�U�O�@��3.���Ҥl,�ڭ̱N�ۭq��Distance���O���A�ഫ��float���A
*/

const float MTF = 3.280833f;

class Distance
{
	private:
	int feet;
	float inch;
	
	public:
	Distance(int f, float in);
	operator float();	//�h�����A�Ÿ�
	friend ostream & operator << (ostream& out, Distance& obj);	//�h��<<�Ÿ��H�Q��X 
};

Distance::Distance(int f, float in)
{
	feet = f;
	inch = in;
}

/*	�h��float���A���,�]���h���e�ᤣ����ܥ\��,
	�ҥH�o�̦h����,float()����٬O�����^��float��ƫ��A
*/ 
Distance::operator float()	 
{
	float fracfeet = inch / 12;
	fracfeet += float(feet);
	
	return fracfeet / MTF;
}

ostream & operator << (ostream& out, Distance& obj)	//�h��<<�B��Ÿ� 
{
	out << obj.feet << " �^�` " << obj.inch << " �^�T";
	return out; 
}

int main(void)
{
	Distance d(11, 5.79499f);	//�I�s�إߪ� 
	float m;					//�ŧi�B�I���ܼ�m 
	
	m = d;	// d�I�s�h��float���,�N�^�ǭȥᵹm 
	
	cout << d << " = " << m << " ����" << endl;	//�h��<<�Ÿ� 
	
	system ("PAUSE");
	return 0; 
}
