#include <iostream>
using namespace std;

int main(){
	int a[7];

	for (int &i : a){  // int &i = a[0]
		cin >> i;
	}

	int sum = 0;
	// for (int i : a){
	// 	sum += i;
	// }
	for (int i = 0; i < 7; i++){
		sum += a[i];
	}

	cout << sum << endl;

	return 0;
}