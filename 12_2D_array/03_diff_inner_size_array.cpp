#include <iostream>
using namespace std;

int main(){
	// int arr[][5] = {{1,2},{3,4,5,6,7},{8,9,10}};

	int arr1[2] = {1, 2};
	int arr2[5] = {3, 4, 5, 6, 7};
	int arr3[3] = {8, 9, 10};

	int* arr[3] = {arr1, arr2, arr3};

	cout << arr[2][2];

	return 0;
}