#include <iostream>
using namespace std;

class Cube{
	public:
		int side;

		Cube(int side = 0) : side(side){
			cout << "Default" << endl;
		}
		void info(){
			cout << "Side - " << side << endl;
		}
};

int main(){
	Cube c1(100); // default constructor
	Cube c2(c1);  // copy constructor call

	c1.side = 200;

	c1.info();
	c2.info();



	return 0;
}