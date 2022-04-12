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
	week v = Friday;

	int a = Monday + Sunday;

	cout << v << endl;
	cout << a << endl;
	return 0;
}