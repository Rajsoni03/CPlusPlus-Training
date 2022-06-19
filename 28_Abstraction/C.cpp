#include <iostream>
using namespace std;

class Car{ // Abstract Class 
	public:
		virtual void start() = 0; // pure virtual function
		virtual void breaks() = 0;
};

class BMW : public Car{
	private:
		void engineCheck(){
			cout << "Engine is checked" << endl;
		}
		void batteryCheck(){
			cout << "battery is checked" << endl;
		}
		void fuleCheck(){
			cout << "fule is checked" << endl;
		}
	public:
		void start(){
			fuleCheck();
			batteryCheck();
			engineCheck();
			cout << "BMW Car is Started" << endl;
		}
		void breaks(){
			cout << "BMW Car is Stop" << endl;
		}
};	

int main(){
	BMW c;

	c.start();
	c.breaks();

	return 0;
}