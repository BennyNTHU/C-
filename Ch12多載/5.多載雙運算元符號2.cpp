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
	int getgcd();
	friend istream& operator >> (istream& in, Fracpri& obj);		// �h��>>�B��l,�Ϩ���ǥ�cin��J���ۭq���OFracpri 
	friend ostream& operator << (ostream& out, Fracpri& obj);		// �h��<<�B��l,�Ϩ���ǥ�cout��X�ۭq���OFracpri 
	bool operator > (Fracpri);	//�h����B�⤸�Ÿ�">"��Fracpri,�öǦ^bool��ƫ��A 
};

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

bool Fracpri::operator > (Fracpri obj)
{
	int numer1, numer2;
	
	numer1 = whole * denom + numer;
	numer2 = obj.whole * obj.denom + obj.numer;
	
	if ((numer1*obj.denom) > (numer2*denom))
		return true;
	else
		return false;
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
	Fracpri s1, s2;
	
	cout << "�п�J�a����1(��� ���l ����): ";
	cin >> s1;	// �h��
	cout << "�п�J�a����2(��� ���l ����): ";
	cin >> s2;	// �h��
	
	if (s1 > s2)
		cout << "�a����1 (" << s1 << ") > " << "�a����2 (" << s2 << ')' << endl;
	else
		cout << "�a����1 (" << s1 << ") <= " << "�a����2 (" << s2 << ')' << endl;
		
	system ("PAUSE");
	return 0; 
}
