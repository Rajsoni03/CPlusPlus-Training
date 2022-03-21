#include <iostream>
#include <float.h>
using namespace std;

int main(){
	double a = 2.34E308;     // 234000000000000000000000000000000000000000000000
	double b = a + 1.0;      // 2.34E22 + 1.0 = 2.34E22

	cout << a << endl;       // 2.34E22
	cout << b << endl;       // 1.0
	cout << b - a << endl;   // 1.0


	long double A = 2.34E18;  
	cout << sizeof(A) << endl; // 96 bits
	cout << A << endl;

	// cout << FLT_MANT_DIG << endl;
	// cout << DBL_MANT_DIG << endl;
	// cout << LDBL_MANT_DIG << endl;

	// cout << FLT_DIG << endl;
	// cout << DBL_DIG << endl;
	// cout << LDBL_DIG << endl;

	// cout << FLT_MAX_10_EXP << endl;
	// cout << DBL_MAX_10_EXP << endl;
	// cout << LDBL_MAX_10_EXP << endl;

	return 0;
}


