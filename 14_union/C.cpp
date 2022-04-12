#include <iostream>
using namespace std;

union id{
	char charID[8];
	int intID;
};

int main(){
	id p1 {"PS479AL"};

	id p2;
	p2.intID = 18200182;

	cout << p1.charID << endl;
	cout << p2.intID << endl;

	return 0;
}