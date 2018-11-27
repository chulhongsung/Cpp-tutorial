#include <iostream>

using namespace std;

int add(int a, int b); // forward declaration
int subtract(int a, int b);
int multiply(int a, int b);

int main()
{
	cout << add(1, 2) << endl;
	cout << subtract(1, 2) << endl;
	
	return 0;
}

// definition
int add(int a, int b) // 이 부분을 prototype이라 함.
{
	return a + b;
}

int subtract(int a, int b)
{
	return a - b;
}

int multiply(int a, int b)
{
	return a * b;
}
