#include <iostream>
using namespace std;
int main()
{
	/*//int a = 5;
	cout << &a << endl;
	int *p;
	p = &a;
	*p = 10;
	a = 20;
	*p = 30;
	int a1 = *p;
	int* z;
	z = &a;
	*z = 50;
	cout << *p << endl;
	cout << a << endl;
	cout << a1 + 15 << endl; 
	/*/
	int a2;
	cin >> a2;
	int *arr = new int[a2];
	for (size_t i = 0; i < a2; i++)
	{
		cin >> arr[i];
	}
	for (size_t i = 0; i < a2; i++)
	{
		cout<< arr[i] << "\t";
	}

	

}
