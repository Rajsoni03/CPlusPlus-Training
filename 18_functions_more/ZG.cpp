#include <iostream>
using namespace std;

int main(){
	int a = 10;
	float b = 2039.32;

	typedef decltype(a + b) T1;

	T1 c = a + b;

	cout << a << endl;
	cout << b << endl;
	cout << c << endl;

	return 0;
}