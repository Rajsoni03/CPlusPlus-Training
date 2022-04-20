#include <iostream>
using namespace std;

int * memAlloc(const int &a){
	int *p = new int(a);
	return p;
}

int main(){

	int *p = memAlloc(10);

	cout << *p << endl;

	*p = 20;

	cout << *p << endl;

	delete p;

	cout << *p << endl;

	return 0;
}