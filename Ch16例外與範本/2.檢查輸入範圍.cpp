#include <iostream>
using namespace std;

/*
	�p�G�ҥ~�X�{�b��Ƥ�,�i�H�Nthrow��b��Ƥ�,�ñN��Ʃ�btry��
*/ 

void check(char i)
{
	if (i < '0' || i > '9')	//�ҥ~�X�{ 
		throw i;	//�ǰe�y���ҥ~���ܼ�,����29�� 
		 
	cout << "��J�� = " << i << endl; 
}

int main(void)
{
	char n;
	
	while (1)
	{
		cout << "�п�J1~9�������r��: ";
		cin >> n;
		
		try	//�i��X�{�ҥ~������:��J���O1~9�������r�� 
		{
			check(n); 
		}
		catch (char i)
		{
			cout << "��J�� = " << i << ",�W�X�d��!" << endl;
			system("PAUSE");
			return 0; 
		} 
	}
	
	system("PAUSE");
	return 0; 
} 

