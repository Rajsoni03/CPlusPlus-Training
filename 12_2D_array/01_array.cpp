#include <iostream>
using namespace std;

int main(){
	// int arr[10];
	int arr2D[4][2]; // [rows][column]

	arr2D[0][0] = 10;
	arr2D[0][1] = 20;
	arr2D[1][0] = 30;
	arr2D[1][1] = 40;
	arr2D[2][0] = 50;
	arr2D[2][1] = 60;
	arr2D[3][0] = 70;
	arr2D[3][1] = 80;

	for (int row = 0; row < 4; row++){
		for (int col = 0; col < 2; col++){
			cout << arr2D[row][col] << "  ";
		}
		cout << endl;
	}

	return 0;
}