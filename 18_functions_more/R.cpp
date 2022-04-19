#include <iostream>
using namespace std;

void incre(const int &a){ // const int a = 20;
	cout << &a << endl;
	cout << a + 1 << endl;
}

int sum (int a, int b){ return a+b; }

int main(){
	int a = 10;

	cout << &a << endl;
	incre(a);

	incre(20);

	return 0;
}