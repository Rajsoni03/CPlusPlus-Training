#include <iostream>
using namespace std;

int main(){
	int a;
	int b;
	int c;

	int &x = a;
	int &y = b;
	int &z = c;

	// &x = b;

	cout << &a << endl;
	cout << &b << endl;
	cout << &c << endl;
	cout << &x << endl;
	cout << &y << endl;
	cout << &z << endl;


	return 0;
}