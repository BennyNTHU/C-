#include <iostream>
using namespace std;

/*
	���O������Ƥ]�i�H�λ��j�Ӽg 
*/ 

class Division
{	
	private:
		int a, b, q;
	
	public:
		Division(int a1, int b1)
		{
			a = a1;
			b = b1;
			q = 0;
		}
		int quotient()
		{
			if (a>=b)
			{
				a -= b;
				q++;
				return quotient();
			}
			else	
				return q;
		}
		int remainder()
		{
			if (a>=b)
			{
				a -= b;
				return remainder();
			}
			else
				return a;
		}	
};

int main(void)
{
	int a, b;
	
	cout << "�п�J��Ӿ��: ";
	cin >> a >> b;
	Division div (a, b);
	
	cout << a << " / " << b << " = " << div.quotient();
	cout << " R " << div.remainder() << endl;
	
	system("PAUSE");
	return 0; 
}

