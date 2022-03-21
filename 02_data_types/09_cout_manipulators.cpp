#include <iostream>
using namespace std;

// cout manipulators
int main(){
	
	int d = 10; // decimal
	int h = 0x19; // hex 
	int o = 071; // octal
	int b = 0b1010; // bin
	
	cout << d << endl;
	cout << hex << h << endl;
	cout << oct << o << endl;
	cout << dec << b << endl;

	return 0;
}

// C code
/* 
#include <stdio.h>
int main(){
	int a = 00;
	int b = 0x19;
	int c = 0260;

	printf("%d\n", a);
	printf("%x\n", b);
	printf("%o\n", c);
}
*/

