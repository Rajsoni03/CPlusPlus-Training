#include <iostream>
using namespace std;

bool checkSeq(int * begin, int * end, bool (*func)(int, int)){
	bool flag = true;
	for (int *i = begin; i != end-1; i++){
		if (func(*i, *(i+1))){
			flag = false;
			break;
		}
	}
	return flag;
}

bool compareA(int a, int b){
	return a > b;
}

bool compareD(int a, int b){
	return a < b;
}

int main(){
	int arr[] = {1, 3, 2, 4, 5, 90, 189, 289};

	cout << checkSeq(arr, arr+8, compareA) << endl;
	cout << checkSeq(arr, arr+8, compareD) << endl;
	// cout << compare(10, 20);
	return 0;
}