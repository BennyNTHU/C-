#include <iostream>
#include <fstream>
using namespace std;

/*
	�p�G�ڭ̭nŪ���G�i����,�i�ϥΥH�U�{���X
	
	����W��.open("�ɮצW��", ios::binary | ios::in);
	
	�p�G���\�}��,�i�H�I�sifstream���O��read��� 
	�nŪ����Ʈ�,�i�ϥ� 
	
	����W��.read(const char *�w�İ�, Ū������)
	
	��Ū��,Ū�����פ@��|��w�İϤ@�ˤj,
	�{���|�@�����@��Ū�����פj�p����ƨ�w�İϫ�,�A����X 
	
	eof()���:�p�GŪ�����Фw�g���ɮ׵�����m�|�^��True,�Ϥ��^��False
	�ϥΤ覡�O:
	
	��J�ɮת���.eof() 
*/ 

class Student
{
	protected:
		int id;
		char name[40];
	
	public:
		void showdata()
		{
			cout << id << '\t' << name << endl;
		}
};

int main(void)
{
	Student stuData;	//�إ߽w�İ� 
	ifstream filePtr;	//�إ߿�X�����ɮ� 
	filePtr.open("D:\\MyDocuments\\Programs\\C++\\Ch15�ɮ׺޲z\\15-4.dat", ios::in);	//�}�ҿ�J�� 
	
	if (!filePtr)
	{
		cout << "open file ERROR" << endl;
		system("PAUSE");
		exit(0);
	}
	else
	{
		filePtr.read((char*) &stuData, sizeof(stuData));	//���ަ��S���F��,��Ū�@���w�İϤj�p�����
		while (!filePtr.eof())	//�u�n�ɮת�������٨S�����ɮ׵�����m 
		{
			stuData.showdata();	//���Ū�쪺�F�� 
			filePtr.read((char*) &stuData, sizeof(stuData));	//�AŪ���U�@�� 
		}
	}
	
	filePtr.close();	//�����ɮ� 
	system("PAUSE");
	return 0;
}

