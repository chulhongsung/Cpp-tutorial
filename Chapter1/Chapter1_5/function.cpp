#include <iostream>

using namespace std;

int addTwoNumbers(int num_a, int num_b)
{
	int sum = num_a * num_b;

	return sum; 
}

int main()
{
	cout << addTwoNumbers(1, 2) << endl;
	cout << addTwoNumbers(3, 4) << endl;
	cout << addTwoNumbers(8, 13) << endl;

	return 0;
}