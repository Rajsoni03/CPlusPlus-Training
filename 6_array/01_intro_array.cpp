#include <iostream>
using namespace std;

int main(){
	// int a1 = 10;
	// int a2 = 20;
	// int a3 = 30;
	// int a4 = 40;
	// int a5 = 50;

	int a[5];

	for (int i = 0; i < 5; i++){
		cin >> a[i];
	}

	for (int i = 0; i < 5; i++){
		cout << a[i] << endl;
	}

	
	return 0;
}