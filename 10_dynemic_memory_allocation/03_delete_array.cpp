#include <iostream>
using namespace std;

int main(){
	int* p = new int[5]{1, 2, 3, 4, 5};
	// delete p;
	delete[] p;
	// p++;

	for (int i = 0; i < 5; i++){
		cout << p[i] << endl;
	}


	return 0;
}