#include <iostream>
using namespace std;

void printSqure(){
	cout << "Squre" << endl;
}

void printSqure(int a){
	cout << a*a << endl;
}

int main(){
	// void printSqure(int a){ // error
	// 	cout << a*a << endl;
	// }
	int a = 5;
	int b = 5;
	// float a = 2.6;
	printSqure();
	printSqure(a);
	return 0;
}

// void printSqure(int a){ // error
// 	cout << a*a << endl;
// }