/*
문자 character char 1 바이트
정수 interger short 2 바이트
			  int   2 바이트
			  long  4 바이트
			  long long 8 바이트 
*/

#include <iostream>
#include <cmath> // power 계산
#include <limits>

int main()
{
	using namespace std;

	short	s = 1; // 2 bytes = 2 * 8 bits = 16 bits
	/*
	int		i = 1;
	long	l = 1;
	long long ll = 1;

	cout << sizeof(short) << endl;
	cout << sizeof(int) << endl;
	cout << sizeof(long) << endl;
	cout << sizeof(long long) << endl;
	*/

	//cout << pow(2, sizeof(short) * 8) << endl; // 65536
	//cout << pow(2, sizeof(short) * 8 - 1) - 1 << endl; // signed일 경우 부호 표현 -1, '0'표현 -1
	//cout << numeric_limits<short>::min() << endl;
	//cout << numeric_limits<short>::lowest() << endl;

	s = 32767;
	s = s + 1; //32768
	
	cout << "32768? " << s << endl; // -32768 ==> overflow 현상

	s = std::numeric_limits<short>::min();

	cout << "min() " << s << endl;

	s = s - 1;

	cout << " " << s << endl; // 32767

	unsigned int i = -1;

	cout << i << endl; // 4294967295 에러 발생하지않고 컴파일함. 그래서 문제가 됨.

	cout << 22 / 4 << endl; // ==> int 5
	cout << 22 / (float)4 << endl; // ==> 5.5

	return 0;
}