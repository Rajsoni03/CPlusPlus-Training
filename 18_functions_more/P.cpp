#include <iostream>
#define INCRE(x) ++x

using namespace std;

inline int incre(int a){	
	return ++a; 
}

int main(){
	int a = 10;

	// function call
	cout << incre(a) << endl; // cout << 11 << endl;

    // macro 
	cout << INCRE(a) << endl; // cout << ++a << endl;

	cout << a << endl;

	return 0;
}