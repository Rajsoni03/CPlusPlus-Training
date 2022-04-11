#include <iostream>
using namespace std;

struct my{
	int a;
} m1, m2, m3;

int main(){
	my m;
	cout << m.a << endl;
	cout << m1.a << endl;
	cout << m2.a << endl;
	cout << m3.a << endl;
	return 0;
}