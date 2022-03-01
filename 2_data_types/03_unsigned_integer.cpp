#include <iostream>
#include <climits>
using namespace std;

int main(){
	short signed_short = SHRT_MAX; // signed short signed_number = -1000;  
	unsigned short unsigned_short = USHRT_MAX;

	int signed_int = INT_MAX; // signed int signed_number = -1000;  
	unsigned int unsigned_int = UINT_MAX;

	long signed_long = LONG_MAX; // signed long signed_number = -1000;  
	unsigned long unsigned_long = ULONG_MAX;

	long long signed_long_long = LLONG_MAX; // signed long long signed_number = -1000;  
	unsigned long long unsigned_long_long = ULLONG_MAX;

	cout << signed_short << endl;
	cout << unsigned_short << endl << endl;

	cout << signed_int << endl;
	cout << unsigned_int << endl << endl;

	cout << signed_long << endl;
	cout << unsigned_long << endl << endl;

	cout << signed_long_long << endl;
	cout << unsigned_long_long;

	return 0;
}