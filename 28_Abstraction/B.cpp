#include <iostream>
using namespace std;

class Car{
	public:
		virtual void start() = 0; // pure virtual function
		virtual void breaks() = 0;
};

class BMW : public Car{
	public:
		void start(){
			Car::start();
			cout << "BMW Car is Started" << endl;
		}
		// virtual void breaks() = 0; // inharited by Car
};	

int main(){
	Car car;
	// BMW c;

	// c.start();
	// c.breaks();

	return 0;
}