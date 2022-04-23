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
		int Area(){
			return 6*side*side;
		}
};

int main(){
	Cube c1;
	Cube c2(10);
	Cube c3 = {20};
	Cube c4 {30};

	Cube c5 = 10;
	Cube c6 = 30;

	cout << c6.Area() << endl;


	return 0;
}