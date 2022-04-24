#include <iostream>
using namespace std;

int* func(){
	int a = 10;
	int *p = &a;
	return p;
}

int main(){
	int *p = func();
	cout << *p << endl;
	return 0;
}