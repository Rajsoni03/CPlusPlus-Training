#include <iostream>
using namespace std;

union group{

};

int main(){
	group g;
	cout << sizeof g << endl;

	return 0;
}