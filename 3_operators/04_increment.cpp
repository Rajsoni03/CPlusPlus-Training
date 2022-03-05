#include <iostream>
using namespace std;

int main(){
	int a = 1;

	// a = a + 1;
	// a += 1;
	// a++; // post increment 

	int b = a++;
	int c = ++b; // pre increment 
	//  int b = a;
	//  a = a + 1;

	// cout << a++ << endl;
	// cout << a << endl;  a = a + 1;

	cout << a << endl; // 2 1 2 
	cout << b << endl; // 1 2 2
	cout << c << endl; // 2 3 2

	a

}