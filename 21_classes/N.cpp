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

void create(){
	Cube c1(10);
	cout << c1.Area() << endl;
}

int main(){
	cout << "main Started" << endl;

	cout << "create function started" << endl;
	create();
	cout << "create function end" << endl;

	cout << "main end" << endl;
	return 0;
}