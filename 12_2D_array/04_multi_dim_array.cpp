#include <iostream>
using namespace std;

int main(){
	int arr[100][20][3][4][10];

	cout << sizeof arr << endl;
	cout <<  (sizeof arr) / 1024 << " KB";
	return 0;
}