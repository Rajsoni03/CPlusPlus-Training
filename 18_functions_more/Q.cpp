#include <iostream>
using namespace std;

void incre(int &a){
	++a;
}

int main(){
	int a = 10;


	cout << a << endl;

	// incre(a);
	incre(20);

	cout << a << endl;


	return 0;
}