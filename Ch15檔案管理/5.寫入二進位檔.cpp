#include <iostream>
#include <fstream>
using namespace std;

/*
	�o�̪��G�i���ɫ����O���榡�ƪ��G�i����,�o���ɮ׮榡�B�z�_�Ӥ��r�ɧ󦳮Ĳv
	�ڭ̥i�H��
	
	����W��.open("�ɮצW��", ios::binary | ios::�Ҧ�)
	
	�Ӷ}�Ҥ@�ӤG�i����,�Ҧ��i�H�Oout(�g�J),app(���[),in(Ū��)
	�p�G�u��Jios::binary,�w�]��ofstream�ɮץB��out�Ҧ� 
	�p�G�w���ɮ׬O�G�i����,�i�H�u��Jios::�Ҧ�
	
	�p�G�ڭ̭n�g�J��ƨ�G�i���ɤ�,�n��
	
	����W��.write(const char *�w�İϫ���, �g�J����)
	
	�G�i���ɳ̤j���u�I�N�O�C�@����ƪ����צb�g�J�ɤ����ɮ׮榡����,�i�H�ΤW���ۭq 
*/

class Student	//�����O���\��O��@�g�J��Ʈɭn�Ϊ��w�İ� 
{
	protected:
		int id;
		char name[40];
	
	public:
		int getid()
		{
			return id;
		}
		void setdata()
		{
			cout << "�п�J�Ǹ��P�m�W(��J0 0 �h����): ";
			cin >> id >> name;
		}
};

int main(void)
{
	Student stuData;	//������|��@�g�J�ɮ׫e���w�İ� 
	ofstream filePtr;	//�إ߿�X�ɮת��� 
	filePtr.open("D:\\MyDocuments\\Programs\\C++\\Ch15�ɮ׺޲z\\15-4.dat", ios::binary);	//�}�ҿ�X�G�i���� 
	
	if (!filePtr)	//�p�G�S�����\�}��,filePtr�|���VNULL 
	{
		cout << "open file ERROR" << endl;
		system("PAUSE");
		exit(0);	//���`�����{�� 
	}
	else
	{
		while(1)
		{
			stuData.setdata();
			if (stuData.getid() != 0)
				filePtr.write((char*) &stuData, sizeof(stuData));
				//�g�J���,�w�İϫ��з�M�O&stuData,�C�@���g�J�����׳]�w����w�İϭ�n�@�� 
			else
				break;
		}
	}
	
	filePtr.close();
	system("PAUSE");
	return 0;
}

