#include <iostream>

int main()
{
	using namespace std;
	
	// copy initialization?
	bool bValue = true;
	char chValue = 'A';
	float fValue = 3.141592f; // f 빼먹으면 안된다. 딥러닝은 float 자료형을 사용.
	double dValue = 3.141592;

	auto aValue = 3.141592; // auto는 자동으로 해준다.
	auto aValue2 = 3.141592f;
	
	int i = 3.141592; // warning 발생 3으로 casting 함. 
	int a((int)3.14); // direct initialization
	int b{123}; // uniform initialization ** 최근에 이걸 권장. uniform은 엄격함. error 발생
	
	int k, l, m; // 같은 데이터형에 대해서만 ,를 사용해서 여러개 선언 가능
	
	/*
	cout << (int)chValue << endl; // chValue A 출력, (int)chValue 65 출력
	cout << fValue << endl;
	cout << dValue << endl;
	cout << sizeof(aValue) << endl; // sizeof() 자료형 메모리
	cout << sizeof(aValue2) << endl;
	*/
	return 0;
}