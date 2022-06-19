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

class BMW : public SuperCar{
	public:
		void start(){
			cout << "BMW Car is started" << endl;
		}					
};

int main(){
	SuperCar sc;
	Car *c = &sc;
	c->start();
	return 0;
}