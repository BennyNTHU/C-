#include <iostream>
using namespace std;

/*
	private�~��:�N�O�Ҧ������Q�~�ӫ᳣�|�ܦ��l�����O��private����
	���l�����O�i�H�s����¦���O��protected�Mpublic���� 
*/
class Point	// ��¦���O 
{
	protected:
	int x;
	int y;
	
	public:
	void set (int n, int m)
	{
		x = n;
		y = m;
	}
	void show()
	{
		cout << "��m = p(" << x << ", " << y << ")" << endl;
	}
}; 

class Area: private Point	// �ŧiArea���O�OPoint���O���l�����O,�B�O��private���A�~�� 
{
	public:
	/* �ѩ�x��y�O�Q�~�ӫ��ܦ�private�����B����s��(�۷��S�Q�~��),
	   �G�ڭ��ǥѩI�s(�s��)��¦���O��public����(�Q�~�ӫ��ܦ�Area��private����,�����i�H�s��) 
	   �Ӷ����s��x��y 
	*/ 
	void setpoint(int n, int m)	 
	{
		set(n, m);
	}
	void showpoint()
	{
		show();
	}
	void showarea()
	{
		cout << "���n = " << x*y << endl; 	
	}
};

int main(void)
{
	Area p;
	
	p.setpoint(2, 5);
	p.showpoint();
	p.showarea();
	
	system("PAUSE");
	return 0;
}

