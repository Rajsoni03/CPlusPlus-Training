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
	using namespace n1;
	// using namespace n2;

	int a = 1000;

	cout << a << endl;
	cout << n1::a << endl;
	cout << n2::b << endl;

	return 0;
}