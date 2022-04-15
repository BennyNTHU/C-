#include <iostream>
#include <fstream>
using namespace std;

const char filename[] = "D:\\MyDocuments\\Programs\\C++\\Ch15�ɮ׺޲z\\15-5.dat";

class Student	//�����O���\��O��@�g�J��Ʈɭn�Ϊ��w�İ� 
{
	protected:
		int id;
		char name[40];
	
	public:
		int getId();
		void setData();
		void showData();
		void write();
		void append();
		void read();
};

int Student::getId()
{
	return id;
}

void Student::setData()
{
	cout << "�п�J�Ǹ��P�m�W(��J0 0 �h����): ";
	cin >> id >> name;
}

void Student::showData()
{
	cout << id << '\t' <<
	name << endl;
}

void Student::write()
{
	ofstream filePtr;
	filePtr.open(filename, ios::binary | ios::out);	//�}�ҿ�X�G�i���� 
	
	if (!filePtr)	//�p�G�S�����\�}��,filePtr�|���VNULL 
	{
		cout << "open file ERROR" << endl;
		system("PAUSE");
		exit(0);
	}
	else
	{
		while(1)
		{
			setData();
			if (getId() != 0)
				filePtr.write((char*) this, sizeof(*this));	//�g�J���,�w�İϫ��з�M�O&stuData,�C�@���g�J�����׳]�w����w�İϭ�n�@�� 
			else
				break;
		}
	}
	filePtr.close();
}

void Student::append()
{
	ofstream filePtr;
	filePtr.open(filename, ios::binary | ios::app);	//�}�ҿ�X�G�i���� 
	
	if (!filePtr)	//�p�G�S�����\�}��,filePtr�|���VNULL 
	{
		cout << "open file ERROR" << endl;
		system("PAUSE");
		exit(0);
	}
	else
	{
		while(1)
		{
			setData();
			if (getId() != 0)
				filePtr.write((char*) this, sizeof(*this));	//�g�J���,�w�İϫ��з�M�O&stuData,�C�@���g�J�����׳]�w����w�İϭ�n�@�� 
			else
				break;
		}
	}
	filePtr.close();
}

void Student::read()
{
	ifstream filePtr;
	filePtr.open(filename, ios::binary | ios::in);	//�}�ҿ�J�� 
	
	if (!filePtr)	//�p�G�S�����\�}��,filePtr�|���VNULL 
	{
		cout << "open file ERROR" << endl;
		system("PAUSE");
		exit(0);
	}
	else
	{
		filePtr.read((char*) this, sizeof(*this));	//���ަ��S���F��,��Ū�@���w�İϤj�p�����
		while (!filePtr.eof())	//�u�n�ɮת�������٨S�����ɮ׵�����m 
		{
			showData();	//���Ū�쪺�F�� 
			filePtr.read((char*) this, sizeof(*this));	//�AŪ���U�@�� 
		}
	}
	filePtr.close();
}

int main(void)
{
	Student stu;
	char n;
	
	while (1)
	{
		cout << "1.�g�J 2.���[ 3.Ū�� 0.����: ";
		cin >> n;
		
		switch(n)
		{
			case '1':
				stu.write();
				break;
			case '2':
				stu.append();
				break;
			case '3':
				stu.read();
				break;
			case '0':
				exit(0);
			default:
				;
		 } 
	}
	
	system("PAUSE");
	return 0;
}
