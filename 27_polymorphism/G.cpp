#include <iostream>
using namespace std;

class Car{
	public:
		virtual void start(){
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

class EVCar : public Car{
	public:				
		// no start method
};

int main(){
	SuperCar sc;	
	NormalCar nc;
	EVCar ec;

	Car *c[4];

	c[0] = &sc;
	c[1] = &nc;
	c[2] = &ec;
	c[3] = &nc;

	for (int i = 0; i < 4; i++){
		c[i]->start();
	}

	return 0;
}