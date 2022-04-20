#include <iostream>
using namespace std;

int & allocateMem(int x){
	int *p = new int(x);
	return *p;
}

int main(){
	int z = 10;
	// int *p = &z; // address
	// int a = z; // value	

	int &a = allocateMem(10); // value (name the heap memory)
	int *p = &allocateMem(20); // address

	cout << a << endl;
	cout << *p << endl;

	int *pa = &a;
	delete pa;

	cout << &z << endl;
	cout << &a << endl;
	cout << p << endl;

	cout << z << endl;
	cout << a << endl;
	cout << *p << endl;

	return 0;
}