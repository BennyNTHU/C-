#include <iostream>
using namespace std;

/*  C++���ܦh�B�⤸���i�H�h��,�p�G�Q�n���D��L�Ҥl�i�H½�ѩΤW����
	��곣�j�P�p�� 
*/

class Test
{
	private:
	int a;
	
	public:
	Test (int n)
	{
		a = n;
	}
	bool operator ! (void);
};

bool Test::operator ! (void)	//�h��"!"�B�⤸��Test�ϥ�,�S���Ѽ� 
{
	if (a != 0)
		return true;
	else
		return false;
}

int main(void)
{
	int n = 0;
	
	cout << "�п�J�@�ӼƦr: ";
	cin >> n;
	
	Test s1(n);
	
	if (!s1)	// �h��"!"�B�⤸ 
		cout << "s1 != 0";
	else
		cout << "s1 = 0";
	
	system ("PAUSE");
	return 0;
}

