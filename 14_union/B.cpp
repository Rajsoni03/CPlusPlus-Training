#include <iostream>
using namespace std;

union group{
	int i;
	short s1;
	short s2;
	char c1;
	char c2;
	char c3;
	char c4;
};

int main(){
	group g;
	cout << sizeof g << endl;
	g.i = 10;
	g.i = 10;
	g.s2 = 55;

	cout << g.i << endl;
	cout << g.s1 << endl;
	cout << g.s2 << endl;
	cout << g.c1 << endl;
	cout << g.c2 << endl;
	cout << g.c3 << endl;
	cout << g.c4 << endl;

	return 0;
}