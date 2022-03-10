#include <iostream>
using namespace std;

int main(){
	short a[7];

	// cout << sizeof (int) * size << endl;
	// cout << sizeof a << endl;

	// cout << sizeof a / sizeof a[0] << endl;
	int size = sizeof a / sizeof a[0];

	for (int i = 0; i < size; i++){
		cin >> a[i];
	}

	for (int i = 0; i < size; i++){
		cout << a[i] << endl;
	}
	return 0;
}