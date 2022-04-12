#include <iostream>
using namespace std;

enum week{
	Monday = 1, 
	Tuesday, 
	Wednesday, 
	Thursday, 
	Friday, 
	Saturday,
	Sunday
};

int main(){
	week v = Monday;

	// v = v + Tuesday;
	v++;

	cout << v << endl;

	return 0;
}