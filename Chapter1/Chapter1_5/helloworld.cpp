#include <iostream>

using namespace std;

void printHelloWorld() // return�� ������ �Լ��� �տ� void
{
	cout << "Hello, World!" << endl;
	
	return;  // ���� ����

	// ���� return; �����Ƿ� ���� X
	cout << "Hello, World 2!" << endl; 
}

int main()
{
	printHelloWorld();

	return 0;
}