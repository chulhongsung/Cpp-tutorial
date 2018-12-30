#include <iostream>


bool isEqual(int a, int b)
{
	bool result = (a == b);

	return result;
}


int main()
{
	using namespace std;

	bool b1 = true; // copy initialization
	bool b2(false); // direct initialization
	bool b3{ true }; // uniform initialization
	b3 = false;

	cout << boolalpha; //noboolalpha
	cout << b3 << endl;
	cout << b1 << endl;
	cout << !true << endl; // ! : not operator
	cout << !b1 << endl;

	// 논리연산자

	cout << (true && true) << endl;
	cout << (true && false) << endl;
	cout << (false && false) << endl;

	cout << (true || true) << endl;
	cout << (true || false) << endl;

	// if문
	if (false)
	{
		cout << "This is ture" << endl;
		cout << "True second line" << endl;
	}
	else
		cout << "This is false" << endl;

	cout << isEqual(1, 1) << endl;

	bool b;

	cin >> b;

	cout << "Your input : " << b << endl;

	return 0;
}