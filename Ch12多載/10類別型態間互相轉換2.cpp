#include <iostream>
#include <cmath>
using namespace std;

/*
	���O���A�����ഫ����ؤ�k,�@�جO��operator����k�ŧi�@��"���A�ഫ���" 
	�t�~�@�ؤ�k�O�h��"="�Ϩ�i�H�b��Ӧۭq�����O��ƫ��A�����ϥ�
	���{���ܽd�Ĥ@�ؤ�k 
	�bPolar���O�����ŧi
	operator Cartesian()���y���ഫ��� 
	�æb�D�{�����H"="�ϥΤ�
	"="�b�o�A���O���A�ഫ�����@�άO,�����k�䪺�F��|�I�s���A�ഫ���
	�ñN�^�ǭȶǦ^���������䪺�F�� 
*/

class Cartesian	// �������� 
{
	private:
	double x;
	double y;
	
	public:
	Cartesian() {x = y = 0.0;}
	Cartesian (double a, double b) {x = a; y = b;}
	friend ostream& operator << (ostream& out, Cartesian& obj);	
};

class Polar	// ���y�� 
{
	private:
	double radius;
	double angle;
	
	public:
	Polar() {radius = angle = 0.0;}
	Polar(double r, double a) {radius = r; angle = a;}
	friend ostream& operator << (ostream& out, Polar& obj);	//�h��"<<"�B��Ÿ� 
	operator Cartesian();	//�ŧi���A�ഫ��� 
};

ostream& operator << (ostream& out, Cartesian& obj)
{
	out << "c(" << obj.x << ", " << obj.y << ")";
	return out;
}

ostream& operator << (ostream& out, Polar& obj)
{
	out << "p(" << obj.radius << ", " << obj.angle << ")";
	return out;
}

Polar::operator Cartesian()
{
	double xx, yy;
	xx = radius * cos(angle);
	yy = radius * sin(angle);
	return Cartesian(xx, yy);	// �^�ǭȬOCartesian���O 
}
 
int main()
{
	Polar p(2.0, 35.0);	// �إ�Polar���� 
	Cartesian c;	// �إߤ@Cartesian����
	 
	c = p;	// p�I�s�FPolar����Cartesian���A�ഫ���,�ñN�^�ǭȫ��w��c 
	
	cout << "���y��: " << p << endl
		 << "�ର�����y��: " << c << endl;
		 
	system("PAUSE");
	return 0; 
}

