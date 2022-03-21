#include <iostream>
using namespace std;

int main(){
	int a = 20;
	int b = 8;
	int c = 8;

	bool res = a==b+12;
	// res = c!=b;
	// res = c<b;
	// res = c>b;
	// res = c<=b; // c<b or c==b
	// res = c>=b; // c>b or c==b

	if (res)
		cout << "true" << endl;
	else 
		cout << "false" << endl;
	
	return 0;
}