#include <iostream>
#include <fstream>
using namespace std;

const char filename[] = "D:\\MyDocuments\\Programs\\C++\\Ch15�ɮ׺޲z\\15-5.dat";

/*
	tellg()���:�^��Ū�����Ц�m 
	tellp()���:�^�Ǽg�J���Ц�m 
*/
 
class Student
{
	int id;
	int name[40];
};

int main()
{
	Student stu;
	ifstream filePtr;
	
	filePtr.open(filename, ios::binary | ios::in);
	
	if(!filePtr)
	{
		cout << "ERROR when open!" << endl;
		system("PAUSE");
		exit(0);
	}
	else
	{
		filePtr.seekg(0, ios::end);		//�NŪ�����в����ɮ׵��� 
		int endpos = filePtr.tellg();	//�^��Ū�����Ц�m 
		
		cout << filename << " ���j�p = " << endpos << " bytes" << endl;
		cout << filename << " �@�� " << endpos/sizeof(stu) << " �����" << endl; 
	}
	
	filePtr.close();
	system("PAUSE");
	return 0;
}
