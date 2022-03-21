#include <iostream>
using namespace std;

int main(){
	int arr[5] = {1, 2, 3, 4, 5};
	int *ptr = arr;

	int arr = 10;
	cout << ptr[2] << endl;
	cout << *(ptr++) << endl;
	cout << ptr << endl;

	
	return 0;
}