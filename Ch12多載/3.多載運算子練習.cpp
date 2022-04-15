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
	/*	istream& �P ostream& �O"�@�عB�⤸�����A"(��pcin�Oistream&���A,cout�Oostream&���A)
		��L�{���|�ݨ줣�P��"�B�⤸�����A"
		�ӳ]��friend�O�]���L�ݭn������Xprivate�������
		�h��������ܹB��l���γ~,��軡>>����@�w�n�Oistream&���A
		�A�h����>>������]�u��istream&���A(�]�N�O���h���e��B�⤸���k�{���X�����c�n�ۦP) 
		���h���e>>�i��u��B�zint,double,char��������ƫ��A
		�h������>>�N�ள�ӳB�z�A�ۤv�w�q����ƫ��A  
	*/ 
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
	Fracpri s1;
	cout << "�п�J�a����(��� ���l ����): ";
	
	cin >> s1;	// �h�� 
	cout << "��²�᪺�a���Ƭ�: " << s1 << endl;	// �h�� 
	
	system ("PAUSE");
	return 0; 
}
