#include <iostream>
using namespace std;

/*	�h�����A�Ÿ����:
	�J��h���Ÿ���ƪ��ɾ��D�n�O�b��ƫ��A�������ഫ��
	
								�ت�(���)��m		�ӷ�(�e��)��m 
	1.�򥻫��A��򥻫��A:		C++���ب��         C++���ب�� 
	2.�򥻫��A�����O���A:		�ϥΫإߪ̨�� 		�L 
	3.���O���A��򥻫��A:		�L					�ϥΦh�����A�Ÿ���� 
	4.���O���A�����O���A:		�ϥΫإߪ̨��		�ϥΦh�����A�Ÿ����
	
	���{������2,�Q�Ϋإߪ̨�ƪ��h���N�򥻸�ƫ��A�ର�ۭq�����O��ƫ��A 
*/

const float MTF = 3.280833f;

class Distance
{
	private:
	int feet;
	float inch;
	
	public:
	Distance(int f, float in);	// ��Ѽƪ��إߪ� 
	Distance(float meter);	// �u�t�@�Ѽƪ��إߪ� 
	friend ostream & operator << (ostream& out, Distance& obj);	//�h��<<�Ÿ��H�Q��X 
};

Distance::Distance(int f, float in)	// ��Ѽƫإߪ� 
{
	feet = f;
	inch = in;
}

Distance::Distance(float meter)	 // �@�Ѽƫإߪ�,�ݷ|�γo�ӨӰ��ഫ��ƫ��A 
{
	float fracfeet = MTF * meter;
	feet = (int)fracfeet;
	inch = 12 * (fracfeet - feet);
}

ostream & operator << (ostream& out, Distance& obj)	//�h��<<�B��Ÿ� 
{
	out << obj.feet << " �^�` " << obj.inch << " �^�T";
	return out; 
}

int main(void)
{
	Distance d(11, 5.79499f);	//�I�s��Ѽƫإߪ� 
	float m = 3.5f;				
	
	d = m;	// �I�sd���@�ܼƫإߪ̨��,�Hm���Ѽƥ�J,�ñN�^�ǭȫ��w��d 
	
	cout << d << " = " << m << " ����" << endl;	//�h��<<�Ÿ� 
	
	system ("PAUSE");
	return 0; 
}
