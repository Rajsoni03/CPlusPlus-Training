#include <iostream>
using namespace std;

int main(){
	// int *p;
	// cout << p << endl;
	// *p = 10;
	// cout << *p << endl;

	int *p = new int;
	delete p;
	// p = NULL;
	// p = nullptr;
	// p = 10;
	// p = 0x0;
	// p = 0x01;

	*p = 10;
	cout << *p << endl;

	return 0;
}