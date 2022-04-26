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
	Cube c1(100); // default constructor
	Cube c2(c1);

	Cube c3;
	c3 = c2;

	c3.info();

	return 0;
}