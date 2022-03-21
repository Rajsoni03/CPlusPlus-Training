#include <iostream>
using namespace std;

// * -> dereference operator 

// pointers = 4 byte;
// 3 byte address
// 1 byte type

int main(){
	int a = 10;

	cout << &a << endl;

	int address = (int)&a;

	cout << hex << address << endl;

	cout << dec << *(int*)address << endl;

	return 0;
}