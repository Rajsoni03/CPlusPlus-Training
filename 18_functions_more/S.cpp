#include <iostream>
using namespace std;

int & same(int &x){
	return x;
}

int main(){
	int a = 10;
	cout << a << endl;
	
	cout << same(a) << endl;

	same(a) = 20;

	cout << a << endl;

	return 0;
}