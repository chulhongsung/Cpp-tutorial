#include <iostream>

int main()
{
	using namespace std;
	
	// copy initialization?
	bool bValue = true;
	char chValue = 'A';
	float fValue = 3.141592f; // f �������� �ȵȴ�. �������� float �ڷ����� ���.
	double dValue = 3.141592;

	auto aValue = 3.141592; // auto�� �ڵ����� ���ش�.
	auto aValue2 = 3.141592f;
	
	int i = 3.141592; // warning �߻� 3���� casting ��. 
	int a((int)3.14); // direct initialization
	int b{123}; // uniform initialization ** �ֱٿ� �̰� ����. uniform�� ������. error �߻�
	
	int k, l, m; // ���� ���������� ���ؼ��� ,�� ����ؼ� ������ ���� ����
	
	/*
	cout << (int)chValue << endl; // chValue A ���, (int)chValue 65 ���
	cout << fValue << endl;
	cout << dValue << endl;
	cout << sizeof(aValue) << endl; // sizeof() �ڷ��� �޸�
	cout << sizeof(aValue2) << endl;
	*/
	return 0;
}