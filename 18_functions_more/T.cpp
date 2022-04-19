#include <iostream>
using namespace std;

int & allocateMem(int x){
	int *p = new int(x);
	return *p;
}

int main(){
	// int z = 10;
	// int *p = &z; // address
	// int a = z; // value	

	int a = allocateMem(10); // value XXX
	int *p = &allocateMem(10); // address

	cout << a << endl;
	cout << *p << endl;

	*p = 20;

	cout << a << endl;
	cout << *p << endl;	

	return 0;
}