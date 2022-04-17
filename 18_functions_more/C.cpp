#include <iostream>
#include <algorithm>
using namespace std;

void printArray(int *begin, int *end){
	for (int *i = begin; i!=end; i++){
		cout << *i << " ";
	}
	cout << endl;
}

int main(){
	int arr[8] = {1, 3, 8, 4, 2, 6, 7, 5};

	sort(arr, arr+8);
	printArray(arr, arr + 8);

	return 0;
}