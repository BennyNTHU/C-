#include <iostream>
using namespace std;

/*
	�]�t���O:�]�t�ä��O�����O���S�إߤ@�����O,�ӬO�b�@�����O���H�ŧi�إ�"�t�@�����O������"
	�o�ا@�k���O�~��,���i�H�F��@�Ǹ��~���������\�� 
*/

class Point	//�w�qPoint���� 
{
	private:
	int x, y;
	
	public:
	Point (int = 0, int = 0);	//Point�إߪ�,�ǥѩI�ssetPoint()�ӫإ� 
	void setPoint(int x, int y);
	int getx() const	//�`�ƫ��A���,�������Ʀ������� 
	{
		return x;
	}
	int gety() const	//�`�ƫ��A���,�������Ʀ������� 
	{
		return y;
	} 
};

class Square
{
	int area() const;
	
	public:
	Point comP; 					//�bSquare���O���إߤ@�ӥs��comP��Point����,�ҥH�ڭ̻�Square���O�]�t�FPoint���O 
	Square(int x = 0, int y = 0);	//Square�إߪ� 
	int getarea() const
	{
		return area();
	}
};

Point::Point(int a, int b)
{
	setPoint(a, b);
}

void Point::setPoint(int a, int b)
{
	x = a;
	y = b;
}

Square::Square(int a, int b)
{
	comP.setPoint(a,b);
}

int Square::area() const
{
	return comP.getx() * comP.gety();
}

int main(void)
{
	Point p(72, 115);	//�إ�Point����p 
	Square s(37, 43);	//�إ�Square����s 
	
	cout << "�I�y��: p(" << p.getx() << ", " << p.gety() << ')' << endl;
	cout << "�x�ήy��: s(" << s.comP.getx() << ", " << s.comP.gety() << ')' << endl;	//�I�ss����Point����comP���������getx()�Pgety() 
	cout << "�x�έ��n: " << s.comP.getx() << " * " << s.comP.gety() << " = " << s.getarea() << endl;  
	
	system("PAUSE");
	return 0;
}

