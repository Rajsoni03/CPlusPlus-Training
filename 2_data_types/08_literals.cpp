#include <iostream>
using namespace std;

// integer literals
int main(){

	// decimal(read) >> bin(store) >> dec(print);
	int a = 10; 


	// hax (0-F)  >> bin >> dec;
	int r = 0x19; 
	int g = 0xd4;
	int b = 0x8f;
	cout << r << endl;
	cout << g << endl;
	cout << b << endl;


	// octal (0-7) >> bin >> dec
	int var = 07364521; 
	cout << var << endl;
	int var1 = 073684521; // error
	cout << var1 << endl;


	// bin >> bin >> dec
	int binary_num = 0b1010; 
	cout << binary_num << endl;


	return 0;
}