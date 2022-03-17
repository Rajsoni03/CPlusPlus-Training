#include <iostream>
using namespace std;

int main(){
	int a = 10;
	// int *p = &a;

	cout << &a << endl;
	// cout << &p << endl;
	// cout << a << endl;
	// cout << p << endl;

	// cout << *p << endl; // ptr -> a -> val


	int &b = a;
	cout << &b << endl;


	return 0;
}