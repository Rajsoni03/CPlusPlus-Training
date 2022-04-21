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
	using namespace n2;

	cout << a << endl;
	cout << b << endl;

	return 0;
}