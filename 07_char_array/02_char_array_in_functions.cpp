#include <iostream>
using namespace std;

int length(const char arr[]){
	int index = 0;
	char ele = arr[index];

	while(ele != '\0'){
		ele = arr[++index];
	}
	return index;
}

bool arrCpy(const char src[], char dst[], int dst_size){
	int src_size = length(src);
	if (src_size < dst_size){ 
		int i = 0;
		char temp = src[i];
		while(temp != '\0'){
			dst[i] = src[i];
			temp = src[++i];
		}
		dst[i] = '\0';
		return true;
	}
	return false;
}

int main(){
	// char arr[4];
	// arr = {'r', 'a', 'j'};
	// char arr[11] = {49, 82, 99, 42, 98, 49, 97, 0, 100, 101};

	char arr1[10] = "raj kumar";
	char arr2[length(arr1)+1];
	cout << length(arr1) << endl;
	cout << arrCpy(arr1, arr2, length(arr1)+1) << endl; // true

	cout << arr1 << endl; // raj
	cout << arr2 << endl; // raj

	cout << length(arr2) << endl;
	return 0;
}
