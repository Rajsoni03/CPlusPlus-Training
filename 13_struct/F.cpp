#include <iostream>
using namespace std;

struct my{
	int a;
};

my m1;

int main(){
	my m;
	cout << m.a << endl;
	cout << m1.a << endl;
	return 0;
}