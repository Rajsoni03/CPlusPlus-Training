#include <iostream>

// collection of variable, functions, classes etc.
namespace mySpace {
	int var = 14;
	int myAge = 35;
}

using namespace std; 		// use std globally
using namespace mySpace;	// use mySpace globally

int main(){
	// using namespace std;     // use std locally
	// using namespace mySpace; // use mySpace locally

	int var;              		// local variable 
	cin >> var;
	cout << "var in local   : " << var << endl;
	std::cout << "var in mySpace : " << mySpace::var << std::endl;
	return 0;
}
