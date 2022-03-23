#include <iostream>
using namespace std;

int main(){
	// int arr[3][4] = {{10, 20, 30, 40}, {50, 60, 70, 80}, {90, 100, 110, 120}};
	// int arr[][4] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130};
	int arr[][5] = {{1,2},{3,4,5,6,7},{8,9,10}};

	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 5; j++){
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	cout << sizeof arr << endl;
	return 0;
}