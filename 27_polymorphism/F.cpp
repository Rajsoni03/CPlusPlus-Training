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
	NormalCar nc;

	Car *c[4];

	c[0] = &sc;
	c[1] = &nc;
	c[2] = &sc;
	c[3] = &nc;

	for (int i = 0; i < 4; i++){
		c[i]->start();
	}

	return 0;
}