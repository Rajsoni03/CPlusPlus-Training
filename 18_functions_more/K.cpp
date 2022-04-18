#include <iostream>
#include <algorithm>
using namespace std;

bool compare(int a, int b){
	return a > b;
}

int main(){
	int arr[] = {1, 2, 54, 56, 5, 8 , 0};
	sort(arr, arr + 7, compare);

	for (int i = 0; i < 7; i++){
		cout << arr[i] << " ";
	}

	return 0;
}