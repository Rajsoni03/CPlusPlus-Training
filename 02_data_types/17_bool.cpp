#include <iostream>
using namespace std;

int main(){
	bool A = true;
	bool B = 1;
	bool C = false;
	bool D = 109;
	bool E = 0;
	bool F = -19;  // 1
	bool G = 0.1;
	bool H = 0.0;
	bool I = -19;   // 1
	bool J = '0';   // 48
	bool K = 0x00;
	bool L = 0;
	bool M = NULL;
	bool N = -57836458765346;
	bool O = (0.0e-22f + 1.0);

	cout << "A : " << A << endl; // 1
	cout << "B : " << B << endl; // 1
	cout << "C : " << C << endl; // 0
	cout << "D : " << D << endl; // 1
	cout << "E : " << E << endl; // 0
	cout << "F : " << F << endl; // 1 / 0
	cout << "G : " << G << endl; // 1
	cout << "H : " << H << endl; // 0
	cout << "I : " << I << endl; // 1 / 0
	cout << "J : " << J << endl; // 1 
	cout << "K : " << K << endl; // 0 
	cout << "L : " << L << endl; // 0 
	cout << "M : " << M << endl; // 0 
	cout << "N : " << N << endl; // 0 
	cout << "O : " << O << endl; // 0 
	// cout << sizeof(A) << endl; // 1 bit - 1 byte 
	return 0;
}

// 0/1
// 00100001 true
// 00000000 false