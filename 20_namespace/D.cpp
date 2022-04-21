#include <iostream>
using namespace std;

int a = 20;

namespace n1{
	int a = 10;
}

int main(){
	int a = 100;

	// a = 1000;
	cout << a << endl;
	cout << n1::a << endl;

	return 0;
}