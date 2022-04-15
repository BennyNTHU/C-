#include <iostream>
#include <string>
using namespace std;

#define max 10
 
template <class TYPE> class Stack	//�w�qStack���O�d��,�̭��|���q�Ϊ���ƫ��A,�HTYPE��� 
{
	private:
		TYPE st[max];			//���|�Ŷ� 
		int ptr;				//���|���� 
	
	public:
		Stack() {ptr = 0;}		//�إߪ̨�� 
		void push(TYPE obj);	//���J��� 
		TYPE pop();				//�u�X��� 
};

template <class TYPE> void Stack<TYPE>::push(TYPE obj)	//���O�d�������,�`�N����Stack�᭱�n�[<TYPE> 
{
	string error = "���|���F!\n";
	
	if (ptr == max)		//�ҥ~�X�{:���|���F 
		throw error;	//�N�O�����~�T�����r���ܼƥᵹ�D�{����catch 
		
	st[ptr]= obj;		//�p�G�S���X�{�ҥ~�N���J��� 
	ptr++; 				//����+1 
}

template <class TYPE> TYPE Stack<TYPE>::pop()
{
	string error = "���|�ŤF!\n";
	
	if (ptr == 0)
		throw error;	//�N�O�����~�T�����r���ܼƥᵹ�D�{����catch
		
	ptr--;				//����-1
	return st[ptr];		//�Ǧ^�Q�u�X����� 
}

int main(void)
{
	int i;
	
	try		//�i��X�{�ҥ~���B(���|�i��ŤF�κ��F) 
	{
		Stack<int> iStack;		//�إ߾�ƪ����| 
		Stack <char> cStack;	//�إߦr�����| 
		
		iStack.push(10);
		iStack.push(20);
		cStack.push('a');
		cStack.push('b');
		
		for (i=2; i>=0; i--) 	//�q��ư��|���X�F�� 
			cout << "iStack[" << i << "] = " << iStack.pop() << '\t';
		cout << endl;
		
		for (i=2; i>=0; i--) 	//�q�r�����|���X�F�� 
			cout << "cStack[" << i << "] = " << cStack.pop() << '\t';
		cout << endl;	
	}
	catch (string str)	//���ҥ~�ɰ��� 
	{
		cout << str;
	}
	
	system ("PAUSE");
	return 0;
}

