# include <iostream>
using namespace std;

int main()
{
	bool flag = false;
	int count, search;
	int number[5] = { 57, 19, 33, 92, 6 };
	
	cout << "��ܸ��: ";
	for ( count = 0 ; count <= 4 ; count++ )
		cout << number[count] << ' ';
	
	cout << "\n��J���: ";
	cin >> search;
	
	for ( count = 0 ; count <= 4 ; count++ )
		if ( number[count] == search )
			flag = 1;
	
	if (flag)
		cout << "�����: " << search << endl;
	else
		cout << "�䤣����: " << search << endl; 
	
	system("PAUSE");
	return 0;
} 
