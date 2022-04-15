#include <iostream>
using namespace std;

#define MAX 5

/*
	���O�]�i�H�ϥΨҥ~�B�z,����try�Mcatch��b�D�{��,throw��b���O�������
	��ҥ~�X�{��,throw�^��^�@�ӪŪ����O��catch��,�٬����~�B�z���O 
*/
 
class Stack
{
	private:
		int st[MAX];
		int top;
	
	public:
		class Empty {};			//Empty���~�B�z���O,Full��Empty�O�]�t�bStack�������O 
		class Full {};			//Full���~�B�z���O 
		Stack() {top = -1;}
		void push (int i)		//���J��� 
		{
			if (top >= MAX-1)	//�p�G���|���F 
				throw Full();	//��ҥ~���O��h��47�檺catch�B�z 
			st[++top] = i;		//���|����+1 
		}
		int pop()	//�u�X��� 
		{
			if (top < 0)		//�p�G���|�O�Ū� 
				throw Empty();	//��ҥ~���O�ᵹ51�檺catch�B�z 
			return st[top--];	//���|����-1 
		}
};

int main(void)
{
	Stack s;
	
	try
	{
		s.push(10);					// top=0; st[0]=10
		s.push(40);					// top=1; st[1]=40
		cout << s.pop() << endl;	//�Ǧ^st[1]=40; top=0 
		cout << s.pop() << endl;	//�Ǧ^st[0]=10; top=-1 
		cout << s.pop() << endl;	//top<0; throw Empty()
	}
	catch (Stack::Full)	//�ҥ~�B�z 
	{
		cout << "���|���F!" << endl; 
	}
	catch (Stack::Empty)
	{
		cout << "���|�ŤF!" << endl; 
	}
	
	system("PAUSE");
	return 0;
}

