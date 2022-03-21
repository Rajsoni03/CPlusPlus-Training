#include <iostream>
using namespace std;

int printSqure(int a, float b){  // formal values
	cout << "Function 1 : " << a*b << endl;
	return a*b;
}
// int printSqure(float a, int b){
// 	cout << "Function 2 : " << a*b << endl;
// 	return a*b;
// }

int main(){
	cout << printSqure(5, 5) << endl; 
	cout << printSqure(2.5, 2.5) << endl; // actual values
	return 0;
}
