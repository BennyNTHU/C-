#include <iostream>
using namespace std;

/*
	�~��:��@���O�~�ӤF�t�@���O��,�ڭ̺ٳQ�~�Ӫ��s"��¦���O",�~�Ӫ��s"�l�����O"
	�~�ӴN�O���l�����O�i�H"�s��"��¦���O���Y�Ǧ���,�]�N�O�����F 
	����¦���O��private��������Q�l�����O�����s��
	(��Yprivate���|�Q�~�Ө�l�����O),���i�H�Τ@�Ǥ覡¶�L�h 
	
	protected����:�u��������ƻPfriend��ƥi�H�s��(�Pprivate�ۦP),
	��protected�����i�H�Q�s��(�~��) 
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

/*
	public���A�~��:
	private�����~�ӫᤴ��private(�l�����O�s�����F,�ΦP�S���~��) 
	protected�����~�ӫᬰprotected
	public�~�ӫᬰpublic 
	�p�G�n�s����¦���O��private����,�|�bprivate�~�Ӥ��Q�� 
*/ 
class Area: public Point	// �ŧiArea���O�OPoint���O���l�����O,�B�O��public���A�~�� 
{
	public:
	void showarea()
	{
		cout << "���n = " << x*y << endl; 	// Point���O����protected�����Q�~�ӤF,�ҥH�i�H�����s�� 
	}
};

int main(void)
{
	Area p;			// �إ�Area����p 
	p.set(2,5);		// �ѩ��~�Ӫ����Y,p�i�H�s��Point��public���� 
	p.show();
	p.showarea();	//p�ۤv����� 
	
	system("PAUSE");
	return 0;
}

