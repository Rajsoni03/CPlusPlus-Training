#include <iostream>
using namespace std;

// int func(int a = 10, int b = 20, int c){
// 	return a + b + c;
// }
// int func(int a, int b = 20, int c){
// 	return a + b + c;
// }
// int func(int a = 10, int b, int c){
// 	return a + b + c;
// }
int func(int a, int b, int c = 0){
	return a + b + c;
}
int main(){
	cout << func(10, 20) << endl;

	return 0;
}