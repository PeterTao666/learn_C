#include <iostream>
using namespace std;
	
int main()
{
	int a = 21;
	int b = 10;
	
	if( a && b )
	{
		cout << "Line 1 - 条件为真 " << endl;
	}
	if( a || b )
	{
		cout << "Line 2 - 条件为真 " << endl;
	}
	/* 改变 a 和 b 的值*/
	a = 0;
	b = 15;
	if( a && b )
	{
		cout << "Line 3 - 条件为真 " << endl;
	}
	else
	{
		cout << "Line 4 - 条件不为真 " << endl;
	}
	if( !(a && b) )
	{
		cout << "Line 5 - 条件为真 " << endl;
	}
	return 0;
}
	