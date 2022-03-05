// #include <iostream>
// using namespace std;

// int main(){
// 	int a = 1;

// 	// a--;     // single opperation
// 	// --a;     // single opperation

// 	cout << --a << a++ << ++a << endl; // undefined behiviour 
// 	cout << a << endl;
// }

#include <stdio.h>

int main(){
	int a = 1;
	printf("%d%d%d\n", --a, a++, ++a);
	
	return 0;
}
