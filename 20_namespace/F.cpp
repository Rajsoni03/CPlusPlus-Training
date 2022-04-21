#include <iostream>
using namespace std;

namespace n1{
	int a = 10;
	int b = 20;
}

namespace n2{
	int a = 100;
	int b = 200;
}

int main(){
	using n1::a;
	using n2::b;

	cout << a << endl;
	cout << b << endl;

	return 0;
}