#include <iostream>
using namespace std;

int sum(int a, int b){ // function 1
	cout << "int function 1" << endl;
	return a + b;
}
float sum(float a, float b){ // function 2
	cout << "float function 2" << endl;
	return a + b;
}
double sum(double a, double b){ // function 3
	cout << "double function 3" << endl;
	return a + b;
}
double sum(double a, int b){ // function 4
	cout << "double-int function 4" << endl;
	return a + b;
}

int main(){
	cout << sum(10, 20) << endl; 
	cout << sum(10.2, 20) << endl;
	cout << sum(10.2, 20.20) << endl;
	cout << sum(10.0, 20.0) << endl;

	return 0;
}
