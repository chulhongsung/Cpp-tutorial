#include <iostream>

using namespace std;

int addTwoNumbers(int a, int b)
{
	int sum = a + b;

	return sum;
}


int main()
{
	int x1;
	int y1;

	cin >> x1;
	cin >> y1;

	cout << "Your input x is " << x1 << " and " << y1 << endl;

	cout << x1 << " + " << y1 << " = " << addTwoNumbers(x1, y1) << endl;

	int x2;
	int y2;

	cin >> x2;
	cin >> y2;

	cout << "Your input x is " << x2 << " and " << y2 << endl;

	cout << x2 << " + " << y2 << " = " << addTwoNumbers(x2, y2) << endl;

	int x3;
	int y3;

	cin >> x3;
	cin >> y3;

	cout << "Your input x is " << x3 << " and " << y3 << endl;

	cout << x3 << " + " << y3 << " = " << addTwoNumbers(x3, y3) << endl;

	return 0;
}