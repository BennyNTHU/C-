#include <iostream>
#include <fstream>
using namespace std;

int main(void)
{
	ofstream filePtr;
	filePtr.open("D:\\MyDocuments\\Programs\\C++\\Ch15�ɮ׺޲z\\15-1.txt", ios::out);	//�g�J�Ҧ� 
	
	if(!filePtr.is_open())	//�����`�}���ɮ� 
	{
		cout << "�}���ɮ׿��~!";
		system("PAUSE");
		return 1;
	}
	else
	{
		filePtr << "Capoo \n";
	}
	
	filePtr.close();	//�����ɮ� 
	system("PAUSE");
	return 0;
} 
