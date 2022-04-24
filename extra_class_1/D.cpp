#include <iostream>
using namespace std;

int* func(){
	int *p = new int(20);
	return p;
}

int main(){
	int *p = func();
	cout << *p << endl;
	return 0;
}