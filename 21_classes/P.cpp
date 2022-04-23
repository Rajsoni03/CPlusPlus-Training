#include <iostream>
using namespace std;

class Cube{
	public:
		int side;

		Cube(){
			side = 0;
			cout << "Default" << endl;
		}
		Cube(int side){
			this->side = side;
			cout << "Parameterized" << endl;
		}
		~Cube(){
			cout << "Distructor" << endl;
		}
		int Area(){
			return 6*side*side;
		}
};


Cube* create(int s){
	Cube *p = new Cube(s);
	return p;
}


int main(){
	cout << "main Started" << endl;

	cout << "create function started" << endl;
	Cube *p = create(10);
	cout << "create function end" << endl;

	delete p;
	// p->~Cube();

	cout << (*p).side << endl;
	cout << p->Area() << endl;

	cout << "main end" << endl;
	return 0;
}