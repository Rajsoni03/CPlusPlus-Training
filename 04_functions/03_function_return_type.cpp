#include <iostream>
using namespace std;

int gl = 100;
// void printSqure(int a){
// 	cout << a*a << endl;
// }

int printSqure(int a){
	cout << a*a << endl;
	return a*a;
}
float printSqure(float b){
	cout << b*b << endl;
	return b*b;
}

int main(){
	int a = 5;
	float b = 2.5;
	// printSqure(a);
	cout << printSqure(a) << endl; 
	cout << printSqure(b) << endl; 
	return 0;
}
