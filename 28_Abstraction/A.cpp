#include <iostream>
using namespace std;

class Car{
	public:
		void start(){
			cout << "INFO : Car Started" << endl;
		}	
		void breaks(){
			cout << "INFO : Car Stop" << endl;
		}		
};

class BMW : public Car{
	public:
		void start(){
			Car::start();
			cout << "BMW Car is Started" << endl;
		}
};	

int main(){
	BMW c;

	c.start();
	c.breaks();

	return 0;
}