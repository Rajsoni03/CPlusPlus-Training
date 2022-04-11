#include <iostream>
using namespace std;

struct my{
	char f;
	int a;
	double s;
};

int main(){
	my obj;

	cout << sizeof(obj) << endl;

	return 0;
}