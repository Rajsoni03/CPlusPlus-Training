#include <iostream>
using namespace std;

int main(){
	int a = 10;
	double b = 20;
	int c = 30;

	int *p = &a;
	double *q = &b;
	int *r = &c;

	cout << &a << endl;
	cout << &b << endl;
	cout << &c << endl << endl;

	// cout << &p << endl;
	// cout << &q << endl;
	// cout << &r << endl << endl;

	// q--;
	q++;

	cout << sizeof q << endl;
	cout << q << endl;

	return 0;
}