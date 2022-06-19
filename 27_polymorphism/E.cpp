#include <iostream>
using namespace std;

class Car{
	public:
		void start(){
			cout << "Car is started" << endl;
		}		
};

class SuperCar : public Car{
	public:
		void start(){
			cout << "Super Car is started" << endl;
		}					
};

class NormalCar : public Car{
	public:
		void start(){
			cout << "Normal Car is started" << endl;
		}					
};

int main(){
	SuperCar sc;
	Car *c1 = &sc;

	NormalCar nc;
	Car *c2 = &nc;

	c1->start();
	c2->start();

	return 0;
}