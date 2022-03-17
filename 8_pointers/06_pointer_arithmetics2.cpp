#include <iostream>
using namespace std;

int main(){
	int a = 10;
	int b = 20;
	int c = 30;

	int *p = &a;
	int *q = &b;
	int *r = &c;

	// cout << &a << endl;
	// cout << &b << endl;
	// cout << &c << endl << endl;

	// cout << &p << endl;
	// cout << &q << endl;
	// cout << &r << endl << endl;

	// cout << *q++ << endl;
	// cout << *(q++) << endl;
	// cout << (*q)++ << endl;

	// cout << ++*q << endl;
	// cout << *++q << endl;
	// cout << *(++q) << endl;

	cout << (++(*q))++ << endl;
	/*
	(*q)    -> 2
	(++20)  -> 3
	(q++)	-> 1
	*/
	cout << *q << endl;

	// cout << (++*q)++ << endl;
	// cout << *q << endl;

	// cout << ++(*q++) << endl;
	// cout << *q << endl;

	// cout << ++*--q++ << endl;
	// cout << *q << endl;

	return 0;
}