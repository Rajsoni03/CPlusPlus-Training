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

int main(){
	cout << "main Started" << endl;

	// Cube a;
	// Cube a;

	for (int i = 0; i < 3; ++i){
		cout << "Iteration - " << i << endl;
		Cube c;
		cout << "last line" << endl;		
	}

	cout << "main end" << endl;
	return 0;
}