#include <iostream>

using namespace std;

void doSomething()
{
#ifdef LIKE_APPLE
	cout << "Apple" << endl;
#else
	cout << "Orange" << endl;
#endif
}
