#include <iostream>
using namespace std;

// ��������
void swap( int num1, int num2 );

int main()
{
	//  �ֲ���������
	int a = 100;
	int b = 200;
		
	cout << "����ǰa��ֵ��" << a << endl;
	cout << "����ǰb��ֵ��" << b << endl;
	
	// ���ú���������ֵ
	swap(a, b);
	
	cout << "������a��ֵ��" << a << endl;
	cout << "������b��ֵ��" << b << endl;
		
	return 0;  
}

void swap(int num1, int num2)
{
	//  �ֲ���������
	int temp;
	temp = num1;
	num1 = num2;
	num2 = temp;
	
	// �鿴�����е�a��bֵ
	cout << "������a��ֵ��" << num1 << endl;
	cout << "������b��ֵ��" << num2 << endl;
	return;
}