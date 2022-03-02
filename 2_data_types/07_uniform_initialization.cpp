#include <iostream>
using namespace std;

int main(){
	int a = 20;
	int b(29);

	int c = {10}; // uniform initlization
	int d{30};    // uniform initlization

	int f{10}, g(30), h = 100;

	int e{2384237008};  // error
	cout << e;

	return 0;	
}