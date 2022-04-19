#include <iostream>
using namespace std;

int & allocateMem(int &x){
	int *p = new int(x);
	return *p;
}

int main(){
	int q = 10;
	
	int a = allocateMem(q); // store value (memory leak)
	int *p = &allocateMem(q); // store address

	cout << a << endl;
	cout << *p << endl;

	*p = 20;

	cout << a << endl;
	cout << *p << endl;	

	return 0;
}