#include <cstdlib>
#include <iostream>
using namespace std;

class Timer
{
	private:
		int second;
		
	public:
		Timer()	//�L�Ѽƫإߪ̨�� 
		{
			second = 0;
		}
		Timer(int s)	//��ƫإߪ̨�� 
		{
			second = s;
		}
		Timer(char *t)	//���Ыإߪ̨�� 
		{
			second = atoi(t);
		}
		int getTime()
		{
			return second;
		}
};

int main()
{
	char str[20] = "250";
	Timer t1;
	Timer t2(10);
	Timer t3(str);
	
	cout << "t1 = " << t1.getTime() << endl;
	cout << "t2 = " << t2.getTime() << endl;
	cout << "t3 = " << t3.getTime() << endl;
	
	system("PAUSE");
	return 0;
}

