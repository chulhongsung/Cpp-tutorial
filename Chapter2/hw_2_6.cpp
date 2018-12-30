#include <iostream>


bool isEven(int a)
{
	bool result = (a % 2) == 0;

	return result;
}

int main()
{
	using namespace std;

	int a;

	cin >> a;

	if (isEven(a))
		cout << a << " is an even number" << endl;
	else
		cout << a << " is an odd number" << endl;

}