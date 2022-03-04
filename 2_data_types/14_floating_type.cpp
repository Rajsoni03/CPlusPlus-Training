#include <iostream>
using namespace std;

int main(){
	cout.setf(ios_base::fixed, ios_base::floatfield);

	float A = 20;
	float B = 2.0;
	float C = 2.25;
	float D = 2.25000;
	float E = 9.8E8;      // 980000000.000000
	float F = 980000000;  // 980000000.000000
	float G = 9.8E-8;     // 0.00000098
	float H = -9.8E8;     // -980000000.000000

	cout << A << endl;
	cout << B << endl;
	cout << C << endl;
	cout << D << endl;
	cout << E << endl;
	cout << F << endl;
	cout << G << endl;
	cout << H << endl;
	return 0;
}

