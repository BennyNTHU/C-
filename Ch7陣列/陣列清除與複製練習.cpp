/* �}�C�ƻs�P�M���m��:
   �H�D�T���@���p�ߤ�{�դ�D�PDx���� */
    
# include <iostream>
# include <iomanip>
using namespace std;

int main()
{
	int i, x, y;
	int STE[3][4] = { { 7, 1, 3, 6 },
					  { 4, -1, 1, 1},
					  { 5, 3, -2, 8} };	//�T���@����{�����Y�� 
	int determine[3][3] = {0};	//�N��X����Ӱ}�C 
	
	cout << "�T���@����{��\n";
	for ( i = 0 ; i < 3 ; i++ )
	{
		cout << STE[i][0] <<(STE[i][1]>0? "x +":"x "); //�p�Gy���Y�ƬO�t��,�N���ο�X+�� 
		cout << STE[i][1] <<(STE[i][2]>0? "y +":"y "); //�p�Gz���Y�ƬO�t��,�N���ο�X+�� 
		cout << STE[i][2] << "z= ";	
		cout << STE[i][3] <<"\n";
	}
	
	for ( y = 0 ; y < 3 ; y++ )
		for ( x = 0 ; x < 3 ; x++ )
			determine[y][x] = STE[y][x]; //�NSTE���Y��3*3�x�}�ƻs����C��
	
	/* ��X3*3���Y�Ʀ�C��D */ 
	cout << "\n��C�� = \n";
	for ( y = 0 ; y < 3 ; y++ )
	{
		cout <<"| ";
		for ( x = 0 ; x < 3 ; x++ )
			cout << setw(2) <<determine[y][x]<< ' ';  
		cout << "|\n";
	}
	
	/* �N��C�����M��,�~���Dx��ȵ��� 
	��41���47����O�h�l��,�Y�Ϥ����椴�M�ॿ�`�B�@ */ 
	for ( y = 0 ; y < 3 ; y++ )
		for ( x = 0 ; x < 3 ; x++ )
			determine[y][x] = 0; 
	
	for ( y = 0 ; y < 3 ; y++ )
		for ( x = 0 ; x < 3 ; x++ )
			determine[y][x] = STE[y][x]; 
			
	for ( y = 0 ; y < 3 ; y++ )
		determine[y][0] = STE[y][3];
	
	/* ��XDx */ 
	cout << "\nDx = \n";
	
	for ( y = 0 ; y < 3 ; y++ )
	{
		cout <<"| ";
		for ( x = 0 ; x < 3 ; x++ )
			cout << setw(2) <<determine[y][x]<< ' ';
		cout << "|\n";
	}
	
	system("PAUSE");
	return 0;
} 
