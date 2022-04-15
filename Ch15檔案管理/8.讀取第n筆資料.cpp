#include <iostream>
#include <fstream>
using namespace std;

const char filename[] = "D:\\MyDocuments\\Programs\\C++\\Ch15�ɮ׺޲z\\15-5.dat";

/*
	seekg()���:�NŪ�����бq���w���_�l��m�V�e�ΦV�Ჾ�ʫ��w���Z��
	seekp()���:�N�g�J���бq���w���_�l��m�V�e�ΦV�Ჾ�ʫ��w���Z��
	�ϥΤ�k:
	 
	��J�ɮת���.seekg(���ʶZ��, ios::�_�l��m)
	��J�ɮת���.seekp(���ʶZ��, ios::�_�l��m)
	
	�_�l��m�i�H�Obeg(�ɮ׶}�l��m,�V��), cur(���Хثe��m,�V��) �� end(�ɮ׵�����m,�V�e) 
*/

class Student
{
	protected:
		int id;
		int name[40];
	public:
		void showdata()
		{
			cout << id << '\t' << name << endl;
		}
};

int main(void)
{
	Student stu;
	ifstream filePtr;
	int n = 0;	//�ĴX����� 
	int pos = 0;	//��Ū������ƪ���m 
	
	filePtr.open(filename, ios::binary | ios::in);	//�}�Ҽg�J�� 
	
	if(!filePtr)	//�}�Ҳ��` 
	{
		cout << "ERROR when open!" << endl;
		system("PAUSE");
		exit(0);
	}
	else
	{
		cout << "�nŪ���ĴX�����: ";
		cin >> n;
		
		pos = (n-1) * sizeof(stu);	//�p��nŪ������m 
		
		filePtr.seekg(pos, ios::beg);	//���ɮ׶}�l���B���ʨ�ӵ���Ʀ�m 
		filePtr.read((char*) &stu, sizeof(stu));	//Ū����� 
		stu.showdata();	//��ܸ�� 
	}
	
	filePtr.close();
	system("PAUSE");
	return 0;
}

