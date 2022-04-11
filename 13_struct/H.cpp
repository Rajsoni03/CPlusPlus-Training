#include <iostream>
using namespace std;

void printMyVar(my m){
	cout << m.a << endl;
}

int main(){
	struct my{
		int a;
	} m1;

	printMyVar(m1);

	return 0;
}