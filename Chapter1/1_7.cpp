#include <iostream>


using namespace std;

int main()
{
	int x = 0;


	cout << x << " " << &x << endl; // &x: x의 위치


	{				// {}: 영역 구분
		// int x = 1;	
		x = 1; 
		
		cout << x << " " << &x << endl; 
	}

	cout << x << " " << &x << endl; // &x: x의 위치
	
	return 0;

}