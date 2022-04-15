#include <iostream>
#include <cmath>
using namespace std;

#define PI 3.1415926f

/*
	����:C++�������������:�������,�����~�� 
	��l�����O�P��¦���O�P�ɩI�s��¦���O�������f
	�Bf�S�I�s�F������O�������P�W����(�h��)���g��
	�ݫŧig���������,f�~���ǥ�"�Q���@�����O������I�s"�Ӧs�����������
	
	�����~�ӫh�O�Φb�~�Ӹ��|���M����,
	�N�h�����O�����г����V�P�@��¦���O,
	�H�קK�~�Ӹ��|�ҸW��i�y���sĶ���~�����p 
*/ 

class Line
{
	private:
		double length;
	
	public:
		Line(double length)		//�إߪ̨�� 
		{
			this->length = length;
		}
		double getLength()
		{
			return this->length;
		}
		virtual double getArea() = 0;	//�ŧi�µ������ 
};

class Square: public Line
{
	public:
		Square(double length): Line(length) {}	//Square�إߪ̨�� 
		double getArea()	//�W��getArea��� 
		{
			return pow(getLength(), 2);
		}
};

class Circle: public Line
{
	public:
		Circle(int radius): Line(radius) {}	//Circle�إߪ� 
		double getArea()	//�W��getArea��� 
		{
			return PI * pow(getLength(), 2);
		}
};

int main()
{
	Square s(5);
	Circle c(10);
	
	cout << "�������� = " << s.getLength();
	cout << "\t����έ��n = " << s.getArea();	//�]��Line��getArea�O�µ������,�B�ѩ�OSquare���O������I�s,�ҥH�I�s���OSquare��getArea��� 
	cout << "\n��Υb�| = " << c.getLength();
	cout << "\t��έ��n = " << c.getArea();		//�]��Line��getArea�O�µ������,�B�ѩ�OSquare���O������I�s,�ҥH�I�s���OSquare��getArea���
	cout << endl; 
	
	system("PAUSE");
	return 0;
}
 
