#include <iostream>
using namespace std;

int main(){
	const int* const p = new int;
	p++;
	(*p)++;
	cout << p << endl;


	// const pointer to const int
	/*
	int a = 10;
	const int* const p = &a;
	// *p = 11;
	// int b = 20;
	// p = &b;
	a = 100;
	cout << *p << endl;
	*/


	// const pointer to non const int
	/*
	int a = 10;
	int* const p = &a;

	int b = 20;
	// p = &b;
	*p = 11;
	cout << *p << endl;
	*/


	// non const pointer to const int
	/* int a = 10;
	const int* p = &a;

	// int b = 20;
	// p = &b;

	*p = 11;
	a = 11;
	// cout << *p << endl;
	*/



	return 0;
}