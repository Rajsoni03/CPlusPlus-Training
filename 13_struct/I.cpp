#include <iostream>
using namespace std;

struct my{
	int a;
};

void printMyVar(my m){
	cout << m.a << endl;
}

int main(){
	my m1;
	printMyVar(m1);

	return 0;
}