#include <iostream>
using namespace std;

int sum(int a, int b){	return a+b; }
int sub(int a, int b){	return a-b; }
int mul(int a, int b){	return a*b; }
int dev(int a, int b){ 	return a/b; }

int calculate(int a, int b, int (*func)(int, int)){
	// return (*func)(a, b);
	return func(a, b);
}

int main(){
	int (*s)(int, int) = sum;

	cout << calculate(10, 20, s) << endl;
	cout << calculate(10, 20, sub) << endl;
	cout << calculate(10, 20, mul) << endl;
	cout << calculate(10, 20, dev) << endl;

	return 0;
}