#include <iostream>
using namespace std;

template <typename T1, class T2, typename T3>
T3 sum(T1 a, T2 b){
	return a + b;
}

int main(){
	cout << sum<int, int, int>(10, 20) << endl;
	cout << sum<float, float, float>(10.109, 20.20) << endl;
	cout << sum<float, int, float>(10.10, 20) << endl;

	// cout << sum(10, 20) << endl; // not valid

	return 0;
}