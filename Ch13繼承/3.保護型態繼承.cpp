#include <iostream>
using namespace std;

/*
	protected�~��:private��������private����,protected�Ppublic�������Q�~�Ӭ�protected
	���l�����O���ઽ���s����¦���O��public���
	�]���L�̳��Q�~�Ӭ�protected,�u��a�l�����O��������ƥh�����s���L�� 
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

class Area: protected Point	// �ŧiArea���O�OPoint���O���l�����O,�B�O��protected���A�~�� 
{
	public:
	/* �ѩ�x��y�O�Q�~�ӫ��ܦ�protected�����B����s��,
	   �G�ڭ��ǥѩI�s(�s��)��¦���O��public����(�Q�~�ӫ��ܦ�Area��protected����,�����i�H�s��) 
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

