#include <iostream>
using namespace std;

int length(char arr[]){
	int index = 0;
	char ele = arr[index];

	while(ele != '\0'){
		ele = arr[++index];
	}
	return index;
}

bool arrCpy(const char src[], char dst[]){

	return true;
	// return false;
}

int main(){
	// char arr[4];
	// arr = {'r', 'a', 'j'};
	// char arr[11] = {49, 82, 99, 42, 98, 49, 97, 0, 100, 101};

	char arr1[10] = "raj\0kumar";
	char arr2[10];
	cout << length(arr1) << endl;
	cout << arrCpy(arr1, arr2) << endl; // true

	cout << arr1 << endl; // raj
	cout << arr2 << endl; // raj

	return 0;
}
