#include <iostream>
#include <algorithm> // max �Լ� ��������.
using namespace std;

#define MY_NUMBER 9 // ��ũ�� ����� �� �Ⱦ�.
#define MAX(a, b) (((a) > (b)) ? (a) : (b))

#define LIKE_APPLE // define�� ���ǵ� ���� �ȿ����� ȿ���� �ִ�.

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
