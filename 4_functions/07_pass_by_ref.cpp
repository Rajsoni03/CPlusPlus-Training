#include <iostream>
using namespace std;

void print(int& b){
	cout << &b << endl;
	b++;
}

int main(){
	int a = 10;
	cout << &a << endl;
	
	cout << a << endl;
	print(a);
	cout << a << endl;


	return 0;
}