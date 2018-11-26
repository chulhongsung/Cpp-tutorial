#include <iostream>

using namespace std;

void printHelloWorld() // return이 없으면 함수명 앞에 void
{
	cout << "Hello, World!" << endl;
	
	return;  // 생략 가능

	// 위에 return; 있으므로 실행 X
	cout << "Hello, World 2!" << endl; 
}

int main()
{
	printHelloWorld();

	return 0;
}