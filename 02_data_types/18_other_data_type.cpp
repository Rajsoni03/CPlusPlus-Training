#include <iostream>
using namespace std;

int main(){
	// auto A = 3.32; // 3.32f, 3.32l, f (float), l (long double)
	// float B = 3.32;
	// cout << sizeof(A) << endl;
	// cout << sizeof(B) << endl;

	// auto C = 346; // u(unsigned int), l (long), ll (long long)
	// short D = 12;
	// cout << sizeof(C) << endl;
	// cout << sizeof(D) << endl;

	// unsigned int a = 10;//	unsigned b = 10;
	// long c = 10;//	long int = 10;
	// long long d  = 10; // long long int a = 10;

	float myDeclType;

	float a = 10.2;
	float b = 20.1;

	decltype(myDeclType) sum = a+b;
	decltype(myDeclType) sub = a-b;
	decltype(myDeclType) mul = a*b;
	decltype(myDeclType) div = a/b;

	cout << sum << endl;
	cout << sub << endl;
	cout << mul << endl;
	cout << div << endl;

	return 0;
}
