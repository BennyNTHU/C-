# include <iostream>
using namespace std;

int main()
{
	const int max = 5;							//�}�C���� 
	int counti = 0, countj = 0, buffer = 0;		//�ƧǻP��X�϶��Ϊ��j��p�ƾ��P�w�ľ� 
	int search = 0,								//���j�M����� 
	int low = 0, high = max - 1					//�j�M�W�U�ɯ��ޭ� 
	int middle = 0;								//����Ư��ޭ� 
	int number[max] = { 57, 19, 33, 92, 6 };	//��}�C 
	
	/* ��X��}�C */ 
	cout << "�Ƨǫe: ";						 
	for ( counti = 0 ; counti < max ; counti++ )
		cout << number[counti] << '\0';

	cout << "\n�п�J�n�j�M�ƭ�: ";
	cin >> search;
	
	/* ��w�ƧǪk */ 
	for ( counti = 0 ; counti < max - 1 ; counti++ ) 
		for ( countj = counti ; countj < max ; countj++ )
			if ( number[counti] > number[countj] )
			{
				buffer = number[counti];
				number[counti] = number[countj];
				number[countj] = buffer;
			}
		
	/* ��X�ƦC�᪺�}�C */	
	cout << "\n�Ƨǫ�: ";	
	for ( counti = 0 ; counti < max ; counti++ )
		cout << number[counti] << '\0';
	
	/* �G���j�M�k */ 
	do
	{
		if ( (low+high)%2 > 0.5 )				//���D�X����� 
			middle = ( low + high ) / 2 + 1;
		else
			middle = ( low + high) / 2;
		
		if ( search < number[middle] )			//�p�G���j�M�Ȥ񤤦�Ƥp 
			high = middle - 1;					//�N������U��,�ç�W�ɧאּ����ƪ��e�@�Ӽ� 
		else if ( search > number[middle] )		//�p�G���j�M�Ȥ񤤦�Ƥj 
			low = middle + 1;					//�N������W��,�ç�U�ɧאּ����ƪ���@�Ӽ� 
		else if ( search == number[middle] )	//�p�G���F 
			break;								//�N�����j�M 
	} while ( low <= high );					//�p�G�䤣��,�̫�U�ɻP�W�����w�|��� 
	
	/* ��X�j�M���G */ 
	if ( low > high )
		cout << "\n�䤣��ƭ�: " << search << endl;
	else
		cout << "\n���ƭ�: " << search << endl;
		
	system("PAUSE");
	return 0; 
 } 
