#include <iostream>
using namespace std;

/*  ���~�B�z
	��ڭ̼g�X�Ӫ��{���Q�ϥΪ̥H�w�Q�~�����Ψϥή�,�٬��ҥ~ 
	(��軡:�n��J�Ʀr�o��J�r��,��J�K�X����)
	�o�ɥi�H�ϥ�try-catch-throw�o�@������r�ӳB�z 
*/ 

int main(void)
{
	char ps[9] = "year2012";
	char str[9];
	cout << "Please enter password: ";	//��J�K�X 
	cin >> str;
	
	try	//�̭��񪺬O�i��X�{�ҥ~�����p 
	{
		for (int i = 0; i < 9; i++)
			if (str[i] != ps[i])	//�K�X���~! 
				throw i;	//�N�X�{�ҥ~���ܼƥᵹcatch�϶� 
		cout << "�K�X���T!" << endl; 
	}
	catch (int i)	//�B�z�ҥ~ 
	{
		cout << "�K�X���~!" << endl; 
	}

	system("PAUSE");
	return 0;
} 
