#include <iostream>
#include <fstream>
using namespace std;

int main(void)
{
	ifstream filePtr;	//�ɮת��� 
	char inData;	//�s���ƽw�İ� 
	
	filePtr.open("D:\\MyDocuments\\Programs\\C++\\Ch15�ɮ׺޲z\\15-2.txt", ios::in);	//Ū���Ҧ� 
	
	if(!filePtr)	//�}���ɮײ��` 
	{
		cout << "�}���ɮ׿��~!" << endl;
		system("PAUSE");
		return 0; 
	}
	else
		while(filePtr.get(inData))	//�v�rŪ���ɮרæs���inData 
			cout << inData;	//��X��ù��W 
	
	filePtr.close();	//�����ɮ� 
	system("PAUSE");
	return 0;
} 
 
