#include <iostream>


using namespace std;

int main()
{
	int x = 0;


	cout << x << " " << &x << endl; // &x: x�� ��ġ


	{				// {}: ���� ����
		// int x = 1;	
		x = 1; 
		
		cout << x << " " << &x << endl; 
	}

	cout << x << " " << &x << endl; // &x: x�� ��ġ
	
	return 0;

}