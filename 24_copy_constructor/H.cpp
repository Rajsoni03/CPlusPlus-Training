#include <iostream>
using namespace std;

class Cube{
	public:
		int side;

		Cube(int side = 0) : side(side){
			cout << "Default Constructor" << endl;
		}
		Cube(const Cube &obj){
			cout << "Copy Constructor" << endl;	
			this->side = obj.side;
		}
		void info() const {
			cout << "Side - " << side << endl;
		}
};

int main(){
	Cube c1(100); // Default Constructor
	Cube c2(c1);  // Copy Constructor

	Cube c3;      // Default Constructor
	c3 = c2;      

	c1.side = 10;
	c2.side = 20;

	c1.info();
	c2.info();
	c3.info();

	return 0;
}