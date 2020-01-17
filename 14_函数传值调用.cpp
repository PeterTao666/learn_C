#include <iostream>
using namespace std;

// 函数声明
void swap( int num1, int num2 );

int main()
{
	//  局部变量声明
	int a = 100;
	int b = 200;
		
	cout << "交换前a的值：" << a << endl;
	cout << "交换前b的值：" << b << endl;
	
	// 调用函数来交换值
	swap(a, b);
	
	cout << "交换后a的值：" << a << endl;
	cout << "交换后b的值：" << b << endl;
		
	return 0;  
}

void swap(int num1, int num2)
{
	//  局部变量声明
	int temp;
	temp = num1;
	num1 = num2;
	num2 = temp;
	
	// 查看函数中的a，b值
	cout << "函数中a的值：" << num1 << endl;
	cout << "函数中b的值：" << num2 << endl;
	return;
}