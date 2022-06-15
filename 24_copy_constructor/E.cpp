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

void display(Cube &c){ // pass by referance
	c.side = 999;
	c.info();
}

int main(){
	Cube c1(100); // default constructor

	display(c1);

	c1.info();

	return 0;
}