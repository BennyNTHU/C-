/* �`�A������ 
   �}�o��:Benny Lee
   2017/10/15 �ĤG��  
   ���D�n�ߤH�h½Ķ���^�� */ 

#include <iostream>
#include <iomanip>	// ��X�榡 
#include <cmath>	// �ƾǤu�� 

#define PI 3.141593
#define E 2.7182818

using namespace std;

float P_density_function ( float );	//�ŧi���v�K�ר�ƤD�O�H�@�B�I�Ƭ����ܼƔ� 
float define_integral ( float );	//�w�n����ƬO�H���I�Ƭ����ܼƔ� 

int main()
{	
	cout<<"�`�A���G�S�٬���������,�Ա��Цۤv�d����ʬ�\n"
		<<"���i�o�ЧAla\n"
		<<"���{���N�i�ܱ`�A���G��,�Х��N�����Լe\n"
		<<"���M�A�|�~��Y���"<<endl;
	system("PAUSE"); 
	
	/*���L�X�`�A���G��Ĥ@�C,�Yz���Ƥp���I�H�U�ĤG��*/ 
	cout<<"Z\t";
	for ( int i = 0 ; i <= 9 ; i++ )
		cout<<i<<'\t';
	cout<<endl;
	
	/*�L�X�`�A���G����*/ 
	float i, var; //i����C,�Yz���Ƥp���I�H�U�ĤG��;var���Ĥ@��,�Yz���ƾ�Ʀ�P�p���I�H�U�Ĥ@�� 
		for ( var = 0.0 ; var <= 3.9 ; var += 0.1 )
		{
			/* ��X��Ʀ�p���I�H�U�Ĥ@�쬰��C�}�Y */ 
			cout << setprecision(1) << setiosflags(ios::fixed|ios::showpoint)
				 << var <<'\t'; 
				 
			/* ��X�q�����ƿn����z���w�n���� */ 
			for ( i = 0 ; i <= 9 ; i++ )
			{
				cout << setprecision(4) <<setiosflags(ios::fixed|ios::showpoint)
					 << define_integral( var + i * 0.01 ) << '\t' ;  // �D�Ӯ椧��,�䤤var+i*0.01�N��w�n�����W�� 
			}
			
			cout<<endl;
		}
		
	system("PAUSE");
	return 0;
} 

/* �w�n����Ɣ�*/ 
float define_integral( float z )	//������v�K�ר�ƶi��w�n�� 
{
	float farea;
	float fsum;
	
	for (float decimal = 0 ; decimal <= z ; decimal += 0.01 ) //decimal�O���v�K�ר�ƪ��ܼ�x,�N��D���ҩM�����j�L�{ 
	{
		if (decimal == 0)
			fsum = 0 ;
		else 
		{
			farea = 0.01 * P_density_function ( decimal );	//�p��@�p�������n,���ɳ]���v�K�ר�Ƥ����ܼ�x=decimal�N�J���� 
			fsum += farea;	//�p�⾤�ҩM 
		}
		
	}
	return fsum;	// �Ǧ^���ҩM���D�{�� 
}

/*�C���v�K�ר�Ɣ�*/ 
float P_density_function( float x )	//���ܼ�x�O�w�n����Ƥ��]�w��decimal
{	
	float fexpo;	
	float frate;
	
	fexpo = - ( pow ( x , 2 ) ) / 2 ;	//�B�z���Ƴ��� 
	frate  = ( 1 / sqrt( 2 * PI ) ) * pow( E , fexpo );	//�A�C�X���v�K�ר�Ƥ�y�y��,�Y�ӼƭȦb���v�K�ר�Ƥ��Ҧ������ 
	
	return frate;	//���Ǧ^y�y��frate(�N�q���ӼƭȩҦ������)���w�n����� 
}


