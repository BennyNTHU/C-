# include <iostream>
using namespace std;

const int MAX = 5;

int main()
{
	int counti = 0, countj = 0, 
	int minimum = 0									//������e�̤p��,��㦳�w�ľ��\�� 
	int mindex = 0;									//�̤p�Ȥ����ޭ� 
	int number[MAX] = { 57, 19, 33, 92, 6 };
	
	cout << "�Ƨǫe: ";
	for ( counti = 0 ; counti < MAX ; counti++ )	//��X��}�C 
 		cout << number[counti] << '\0';
 	
	for ( counti = 0 ; counti < MAX-1 ; counti++ )	//�}�l�Ƨ�,�Oa[0]����e�̤p�� 
	{
		mindex = counti;							//���Ocounti����e�̤p�Ȥ����ޭ� 
		minimum = number[counti];					//���Ominimum����e�̤p�� 
		for ( countj = counti + 1 ; countj < MAX ; countj++ )
		{
			if ( number[countj] < minimum )			//�v�@�ˬd��e�̤p�Ȥ���U����,�Y��e���������e��minimum�٤p 
			{
				minimum = number[countj];			//�h�O�����s���̤p�� 
				mindex = countj;					//�������ޭȴN�O�s���̤p�ȯ��� 
			}
		}
		number[mindex] = number[counti];			//�N��e�s�o�{���̤p�ȻP��ƥ洫 
		number[counti] = minimum;
	}
	
	cout << "\n�Ƨǫ�: ";
	for ( counti = 0 ; counti < MAX ; counti++ )	//��X�Ƨǧ������ƦC 
		cout << number[counti] << '\0';
	cout << endl;
	
	system("PAUSE");
	return 0;
}
