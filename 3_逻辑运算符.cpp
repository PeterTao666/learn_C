#include <iostream>
using namespace std;
	
int main()
{
	int a = 21;
	int b = 10;
	
	if( a && b )
	{
		cout << "Line 1 - ����Ϊ�� " << endl;
	}
	if( a || b )
	{
		cout << "Line 2 - ����Ϊ�� " << endl;
	}
	/* �ı� a �� b ��ֵ*/
	a = 0;
	b = 15;
	if( a && b )
	{
		cout << "Line 3 - ����Ϊ�� " << endl;
	}
	else
	{
		cout << "Line 4 - ������Ϊ�� " << endl;
	}
	if( !(a && b) )
	{
		cout << "Line 5 - ����Ϊ�� " << endl;
	}
	return 0;
}
	