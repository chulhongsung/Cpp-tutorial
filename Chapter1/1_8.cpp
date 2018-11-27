#include <iostream>

using namespace std;

int main()
{
	int x = 2; // x is a variable, 2 is a literal.
	
	int y = (x > 0) ? 1 : 2; // 3항연산자  R에서 ifelse함수 

	// cout << x + 2 << endl; x + 2는 2항연산자

	cout << y << endl;

	return 0;
}