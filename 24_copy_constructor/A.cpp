#include <iostream>
using namespace std;

class Cube{
	public:
		int side;

		Cube(int side = 0) : side(side){
			cout << "Default" << endl;
		}
};

int main(){
	Cube c1;
	Cube c2 = 10;
	Cube c3(10);
	Cube c4{10};
	Cube c5 = {10};

	Cube c6(c2);

	return 0;
}