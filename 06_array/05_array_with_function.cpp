#include <iostream>
using namespace std;

void printArray(int newArr[], int size){
	// for (int i : newArr){
	// 	cout << i << endl;
	// }
	// int size = sizeof newArr / sizeof newArr[0];

	for (int i = 0; i < size; i++){
		cout << newArr[i]++ << endl;
	}
	// cout << sizeof newArr << endl;
}


int main(){
	int arr[7];
	for (int& i : arr) cin >> i;

	printArray(arr, 7);

	int size = sizeof arr / sizeof arr[0];
	for (int i = 0; i < size; i++){
		cout << arr[i] << endl;
	}

	return 0;
}