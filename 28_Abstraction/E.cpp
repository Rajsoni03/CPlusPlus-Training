#include <iostream>
using namespace std;

class Car{
	public:
		virtual void start() = 0;
		virtual void stop() = 0;
};

class SuperCar : public Car{
	public:
		void start(){
			cout << "start" << endl;
		}
		virtual void stop() = 0;
};

class BMW : public SuperCar{
	public:
		void stop(){
			cout << "stop" << endl;
		}
};

int main(){
	// SuperCar c;
	BMW c;
	c.start();
	c.stop();
	return 0;
}