#include <iostream>
using namespace std;

int main(){
	int A = 10;
	int B = 3;

	cout << A/B << endl; // int / int = int

	float C = 3.0;
	cout << A/C << endl; // int / float = float
	cout << C/A << endl; // float / int = float

	float D = 2.5;
	cout << D/C << endl; // float / float = float

	return 0;
}