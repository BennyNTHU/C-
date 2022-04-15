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
	Fracpri operator + (Fracpri);	//�h�����B�⤸�Ÿ�"+"��Fracpri,�öǦ^Fracpri��ƫ��A 
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

Fracpri Fracpri::operator + (Fracpri obj)	//�h�����B�⤸�Ÿ�+ 
{
	/*	�b�D�{����,s1�I�s�F"+"��ƨåHs2���ѼƶǶi�o�̪�obj
		�ҥH�b�o�̬ݨ쪺numer, denom, ���O�I�s��(s1)����Ʀ���
		obj.numer, obj.denom, obj.whole�O�Ѽ�(s2)����Ʀ���
		����Ʀ^��temp�^�h 
	*/ 
	Fracpri temp;
	
	int t = (numer * obj.denom + obj.numer * denom);
	
	temp.denom = denom * obj.denom;
	temp.numer = t % temp.denom;
	temp.whole = whole + obj.whole + (t / temp.denom);
	
	return temp;
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
	Fracpri s1, s2, s3;
	
	cout << "�п�J�a����1(��� ���l ����): ";
	cin >> s1;	// �h��
	cout << "�п�J�a����2(��� ���l ����): ";
	cin >> s2;	// �h��
	
	/*	s1�I�s�F"+"���,�åHs2���Ѽƶǻ��i"+"�̭�
		C++�|�۰��ǥ�"="�N�^�ǭȫ��w��s3("="�O���ݭn�Q�h����) 
	*/ 
	s3 = s1 + s2;	 
	
	cout << "�a����1 + �a����2 = " << s1 << " + " << s2 << " = " << s3 << endl;	// �h�� 
 
	system ("PAUSE");
	return 0; 
}
