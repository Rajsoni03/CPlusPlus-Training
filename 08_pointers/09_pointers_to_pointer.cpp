#include <iostream>
using namespace std;

int main(){
	int a = 10;
	int* p1 = &a;
	int** p2 = &p1;
	int*** p3 = &p2;
	int**** p4 = &p3;
	int***** p5 = &p4;
	int****** p6 = &p5; 


	cout << a << endl;
	cout << *p1 << endl;
	cout << **p2 << endl;
	cout << ***p3 << endl;
	cout << ****p4 << endl;
	cout << *****p5 << endl;
	cout << ******p6 << endl;


	return 0;
}