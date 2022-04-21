#include <iostream>
using namespace std;

template <typename T1, typename T2>
void sum(T1 a, T2 b){
	cout << a + b << endl;
}

void sum(double a, double b){
	cout << "My Special Function" << endl;
	cout << a + b << endl;
}

int main(){
	// sum<int, int>(10, 20);
	// sum<double, int>(10.2, 20);
	// sum<double, double>(10.2, 20.20);
	// sum<int, int>(10.0, 20.0);

	sum(10, 20);
	sum(10.2, 20);
	sum(10.2, 20.2);
	sum(10.0, 20.0);

	// sum(10, 20);
	// sum(10.2, 20);
	// sum(10.2, 20.2);
	// sum<double, double>(10.0, 20.0);

	return 0;
}