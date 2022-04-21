#include <iostream>
using namespace std;

template <typename T1, typename T2> // template function
void sum(T1 a, T2 b){
	cout << "My Template Function" << endl;
	cout << a + b << endl;
}

template <> // template specialization
void sum<double, double>(double a, double b){
	cout << "My Special Function" << endl;
	cout << a + b << endl;
}

void sum(double a, double b){
	cout << "My Normal Function" << endl;
	cout << a + b << endl;
}

int main(){
	sum(10.20, 20.0);
	sum<double, double>(10.20, 20.0);
	sum(10, 20);
	sum<double>(10, 20.20);

	return 0;
}