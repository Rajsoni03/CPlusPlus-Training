#include <iostream>
using namespace std;

bool compareA(int a, int b){
	return a > b;
}
bool compareD(int a, int b){
	return a < b;
}

int main(){
	int arr[] = {1, 2, 3, 4, 5, 90, 189, 289};

	bool (*p)(int, int) = compareD; // function pointer

	cout << (*p)(10, 20);
	cout << p(10, 20);
	cout << compareD(10, 20);
	return 0;
}