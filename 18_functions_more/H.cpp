#include <iostream>
using namespace std;


bool checkSeq(int * begin, int * end){
	bool flag = true;
	for (int *i = begin; i != end-1; i++){
		if (compare(*i,*(i+1))){
			flag = false;
			break;
		}
	}
	return flag;
}

bool compare(int a, int b){
	return a > b;
}

int main(){
	int arr[] = {1, 2, 3, 4, 5, 90, 189, 289};

	cout << checkSeq(arr, arr+8) << endl;
	// cout << compare(10, 20);
	return 0;
}