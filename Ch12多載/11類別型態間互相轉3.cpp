#include <iostream>
#include <cmath>
using namespace std;

/*
	���O���A�����ഫ����ؤ�k,�@�جO��operator����k�ŧi�@��"���A�ഫ���" 
	�t�~�@�ؤ�k�O�h��"="�Ϩ�i�H�b��Ӧۭq�����O��ƫ��A�����ϥ�
	���{���ܽd�ĤG�ؤ�k 
*/

class Polar	// ���y�� 
{
	private:
	double radius;
	double angle;
	
	public:
	Polar() {radius = angle = 0.0;}
	Polar(double r, double a) {radius = r; angle = a;}
	double getr() {return radius;}
	double geta() {return angle;} 
	friend ostream& operator << (ostream& out, Polar& obj);	//�h��"<<"�B��Ÿ�  
};

class Cartesian	// �������� 
{
	private:
	double x;
	double y;
	
	public:
	Cartesian() {x = y = 0.0;}
	Cartesian(double a, double b) {x = a; y = b;}
	Cartesian operator = (Polar p);	// �ŧi�h��"="�����,�`�N�o�̤@�w�n���ŧiPolar���O,�_�h�|�sĶ���~ 
	friend ostream& operator << (ostream& out, Cartesian& obj);	
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

Cartesian Cartesian::operator = (Polar p)
{
	double r = p.getr();
	double a = p.geta();
	
	x = r * cos(a);
	y = r * sin(a);
	
	return Cartesian(x, y);
}
 
int main()
{
	Polar p(2.0, 35.0);	// �إ�Polar���� 
	Cartesian c;	// �إߤ@Cartesian����
	 
	c = p;	// �I�s�h��"="�����,�Hp���Ѽƥᵹ"="���,�ñN�^�ǭȥᵹc 
	
	cout << "���y��: " << p << endl
		 << "�ର�����y��: " << c << endl;
		 
	system("PAUSE");
	return 0; 
}

