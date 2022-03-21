#include <iostream>
using namespace std;

void print(int b){
	cout << "Address of b : " << &b << endl;
	b++;
	cout << b << endl;
}

int main(){
	int a;
	cin >> a;

	cout << "Address of a : " << &a << endl;
	print(a);

	cout << a << endl;

	return 0;
}