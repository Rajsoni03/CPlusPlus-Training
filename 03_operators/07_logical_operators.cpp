#include <iostream>
using namespace std;

int main(){
	bool a = 0;
	bool b = !a; 

	int A = 3;
	if ((A<10) && (++A < A)){
		cout << "Right" << endl;
	}

	// cout << !a << endl; // not !
	// cout << !b << endl;

	// cout << (0 && 0) << endl;
	// cout << (0 && 1) << endl;
	// cout << (1 && 0) << endl;
	// cout << (1 && 1) << endl;

	// cout << (0 || 0) << endl;
	// cout << (0 || 1) << endl;
	// cout << (1 || 0) << endl;
	// cout << (1 || 1) << endl;

	// if (!(9>10)){
	// 	cout << "Error" << endl;
	// }
	


	return 0;
}