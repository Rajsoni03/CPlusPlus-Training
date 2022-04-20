#include <iostream>
using namespace std;

const int * same(const int &a){
	return &a;
}

int main(){
	int a = 20;

	const int *p = same(a);

	cout << a << endl;
	cout << *p << endl;
	cout << &a << endl;
	cout << p << endl;

	a = 10;
	// *p = 10;

	cout << a << endl;
	cout << *p << endl;
	cout << &a << endl;
	cout << p << endl;

	return 0;
}