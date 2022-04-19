#include <iostream>
#define SUM(x, y) x+y

using namespace std;

int sum(int a, int b){	
	return a+b; 
}

int main(){
	int a = 10;
	int b = 20;
	cout << sum(a, b) << endl; // function call
	cout << SUM(a, b) << endl; // macro 

	return 0;
}