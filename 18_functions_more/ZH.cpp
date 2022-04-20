#include <iostream>
using namespace std;

// template <typename T1, typename T2> 
// decltype(a + b) sum(T1 a, T2 b){
// 	return a + b;
// }

// template <typename T1, typename T2> 
// decltype(T1 + T2) sum(T1 a, T2 b){
// 	return a + b;
// }

template <typename T1, typename T2> 
auto sum(T1 a, T2 b) -> decltype(a + b){
	return a + b;
}

int main(){
	cout << sum(10.20, 20.20) << endl;

	return 0;
}