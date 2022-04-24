#include <iostream>
using namespace std;

int* func(){
	int *p = new int(20);
	return p;
}

// void operatordelete(int *p){
// 	erase(p);
// 	deallocate(p); // unlock(p);
// }

int main(){
	int *p = func();
	// delete p;

	int b = 10;
	p = &b;
	cout << *p << endl;
	return 0;
}