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

void display(const Cube &c){ // create a new object
	c.info();
}

int main(){
	Cube c1(100); // default constructor

	// display(c1);
	display(Cube(10));

	return 0;
}