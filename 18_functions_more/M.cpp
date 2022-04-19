#include <iostream>
using namespace std;

inline int sum(int a, int b){
	return a + b;
}

int main(){
	int a = 10;
	int b = 20;
	cout << sum(a, b) << endl; // cout << {10 + 20} << endl;
	cout << sum(a, b) << endl; // cout << {10 + 20} << endl;
	cout << sum(a, b) << endl; // cout << {10 + 20} << endl;

	return 0;
}

// op
// call -> address
// copy - a
// copy - b
// a + b
// return 