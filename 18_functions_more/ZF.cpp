#include <iostream>
using namespace std;

int main(){
	int a = 10;
	float b = 20.32;

	typedef decltype(a) T1;
	// typedef decltype(b) T1;

	T1 c = 100.29;

	cout << a << endl;
	cout << b << endl;
	cout << c << endl;

	return 0;
}