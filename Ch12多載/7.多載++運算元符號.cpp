#include <iostream>
#include <cmath>
using namespace std;

class Fracpri
{
	private:
	int whole;
	int numer;
	int denom;
	
	public:
	Fracpri() {}	//�L�Ѽƫإߪ�
	Fracpri(int, int, int);	//���Ѽƫإߪ�,�إߪ̨�Ʀh�� 
	int getgcd();
	friend istream& operator >> (istream& in, Fracpri& obj);		// �h��>>�B��l,�Ϩ���ǥ�cin��J���ۭq���OFracpri 
	friend ostream& operator << (ostream& out, Fracpri& obj);		// �h��<<�B��l,�Ϩ���ǥ�cout��X�ۭq���OFracpri 
	Fracpri operator ++ ();	//�h���e�m�B�⤸�Ÿ�"++"��Fracpri,�öǦ^Fracpri��ƫ��A
	Fracpri operator ++ (int);	//�h����m�B�⤸�Ÿ�"++"��Fracpri,�öǦ^Fracpri��ƫ��A
	//���ɤ]�Ψ�F��Ʀ����h�������� 
};

Fracpri::Fracpri(int a, int b, int c)
{
	whole = a;
	denom = b;
	numer = c;	
}
 
int Fracpri::getgcd()	//�ϥ�����۰��k��o�̤j���]�� 
{
	int max = 0;
	int min = 0;
	int rmd = 0;
	
	max = denom;
	min = numer;
	rmd = min;
	
	while (rmd != 0)
	{
		rmd = max%min;
		if (rmd == 0)
			break;
		max = min;
		min = rmd;
	}
	
	return min;
}

Fracpri Fracpri::operator ++ ()	//�h���e�m++�� 
{
	return Fracpri(++whole, denom, numer);
}

Fracpri Fracpri::operator ++ (int)	//�h����m++��
{
	return Fracpri(whole++, denom, numer);
} 

istream& operator >> (istream& in, Fracpri& obj)	// �D�{����,cin�|�ᵹ"in",  s1�|�ᵹ"obj"
{
	 
	in >> obj.whole >> obj.numer >> obj.denom;	// �w�qFracpri��ƫ��A��>>���B��W�h 
	
	obj.whole = abs(obj.whole);
	obj.numer = abs(obj.numer);
	obj.denom = abs(obj.denom);
	
	return in;
}

ostream& operator << (ostream& out, Fracpri& obj)	//// �D�{����,cout�|�ᵹ"in",  s1�|�ᵹ"obj" 
{
	int gcd = obj.getgcd();
	
	obj.numer = obj.numer / gcd;	//���� 
	obj.denom = obj.denom / gcd;
	
	out << obj.whole << ' ' << obj.numer << '/' << obj.denom;	// �w�qFracpri��ƫ��A��<<���B��W�h
	
	return out;
}

int main(void)
{
	Fracpri s1, s2, s3, s4;
	
	cout << "�п�J�a����1(��� ���l ����): ";
	cin >> s1;	// �h��
	cout << "�п�J�a����2(��� ���l ����): ";
	cin >> s2;	// �h��
	
	s3 = ++s1;	// �h��
	s4 = s2++;	// �h��
	
	cout << "\ns3 = ++s1 = " << s3;
	cout << "\n �B��� s1 = " << s1 << endl;
	cout << "\ns4 = s2++ = " << s4;
	cout << "\n �B��� s2 = " << s2 << endl;
	
	system ("PAUSE");
	return 0; 
}
