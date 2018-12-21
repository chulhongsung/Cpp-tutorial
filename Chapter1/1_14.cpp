#include <iostream>
#include <algorithm> // max 함수 갖고있음.
using namespace std;

#define MY_NUMBER 9 // 매크로 요새는 잘 안씀.
#define MAX(a, b) (((a) > (b)) ? (a) : (b))

#define LIKE_APPLE // define는 정의된 파일 안에서만 효력이 있다.

void doSomething();

int main()
{
	//cout << MAX(1 + 3, 2) << endl;
	//cout << std::max(1 + 3, 2) << endl;
/*#ifdef LIKE_APPLE
	cout << "APPLE" << endl;
#endif

#ifndef LIKE_APPLE
	cout << "Orange" << endl;
#endif */
	doSomething();
	return 0;
}
