#include <iostream>
using namespace std;

/*	
	�ڭ̤]�i�H��try,throw�Mcatch����b��Ƹ̭� 
*/
 
bool check(char i)
{
	try
	{
		if (i < '0' || i > '9')
			throw i;
		cout << "��J�� = " << i << endl;
		return true;	
	}
	catch (char i)
	{
		cout << "��J�� = " << i << ",�W�X�d��!" << endl;
		return false;
	} 
	 
}

int main(void)
{
	char n;
	
	do {
		cout << "�п�J1~9�������r��: ";
		cin >> n;	
	} while (check(n));
	
	system("PAUSE");
	return 0; 
} 

