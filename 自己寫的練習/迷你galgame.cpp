#include <iostream>
using namespace std;

int main (void)
{	
	char choose = '0';
	
	cout << "�H�a�~���Q��A�k�B�ͩO!";
	cout << '\n' << "�п��\n";
	cout << "A.���B�z B.���˦o\n : ";
	
	while ((choose != 'A')||(choose != 'B')) 
	{
		cin >> choose;
		if ( (choose != 'A') || (choose != 'B') )
			cout << "�п�JA��B : ";
	}
	
	if (choose = 'A')
		cout << "�𲤦��\!";
	else
		cout << "�𲤥���!";
		
	return 0;
}
