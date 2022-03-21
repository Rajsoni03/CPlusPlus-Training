#include <iostream>
using namespace std;

int getint(int a){
	int x = 4*a;
	return x;
}

int* getArray(int size){
	// int arr[size] = {10, 20, 30, 40};
	int *arr = new int[size];
	return arr;
}

int main(){
	int *result = getArray(4);

	double *f = (double*)(new float);

	for (int i = 0; i < 4; ++i){
		cin >> *(result+i);
	}

	for (int i = 0; i < 4; ++i){
		cout << *(result+i) << endl;
	}
	return 0;
}