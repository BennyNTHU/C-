#include <iostream>
using namespace std;

/*
	�d��:���ɭԧڭ̳]�p����Ʃ����O�u�୭�w�Y�ظ�ƫ��A�Φۭq���O�ϥ�(��pint),
	�p�G�Q�n��L��ƫ��A(��軡double),�Ψ�L�ۭq���O�]��ϥΪ���,�i�H�ϥνd�� 
*/

template <class X>				// �w�q���O�d��, X�O�ڭ̧Ʊ�i�H�q�Ϊ���ƫ��A 
void sort(X *items, int max)	// ��w�ƧǨ��,X�����A�d��,�i�H�Oint, double....,��max�@�w�o�Oint 
{
	register int si, di;
	X temp;
	
	for (si=0; si<max-1; si++)
		for (di=si; di<max; di++)
			if (items[si] > items[di])
			{
				temp = items[si];
				items[si] = items[di];
				items[di] = temp;
			}
} 

int main (void)
{
	int iArray[7] = {6, 8, 9, 1, 10, 13, 3};
	double dArray[5] = {3.5, 2.1, 7.6, 9.6, 8.7};
	int i = 0;
	
	cout << "�Ƨǫe: ";
	for (i=0; i<7; i++)
		cout << iArray[i] << ' ';
	cout << endl;
	
	sort(iArray, 7);	// ��ư}�C�i�H�ڭ̼g����ƱƧ� 
	
	cout << "�Ƨǫ�: ";
	for (i=0; i<7; i++)
		cout << iArray[i] << ' ';
	cout << endl;
	
	cout << "�Ƨǫe: ";
	for (i=0; i<5; i++)
		cout << dArray[i] << ' ';
	cout << endl;
	
	sort(dArray, 5);	// double�}�C�]�i�H�ϥΧڭ̼g����ƱƧ� 
	
	cout << "�Ƨǫ�: ";
	for (i=0; i<5; i++)
		cout << dArray[i] << ' ';
	cout << endl;
	
	system("PAUSE");
	return 0;
}

