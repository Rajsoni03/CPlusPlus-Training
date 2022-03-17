#include <iostream>
using namespace std;

int main(){
	int a = 10;
	int* ptr = &a;

	cout << &a << endl;
	cout << &ptr << endl;

	cout << a << endl;
	cout << ptr << endl;

	cout << *ptr << endl;	

	*ptr = 11;
	cout << a << endl;

	return 0;
}