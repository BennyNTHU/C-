#include <iostream> 
#include <iomanip>
using namespace std;

/*
	���j��ƪ������b���e�N�w�g���йL,�|�X�һ���
*/ 

long factorial(int);

int main(void)
{
	int count = 1;
	
	cout << "�O��\t" << setw(8) << "����\n";
	
	do {
		cout << setw(3) << count << '\t';
		cout << setw(7) << factorial(count) << endl;
	} while (++count<=10);
	
	system("PAUSE");
	return 0;
}

long factorial (int n)
{
	if (n>1)
		return n*factorial(n-1);
	else
		return 1;
}

