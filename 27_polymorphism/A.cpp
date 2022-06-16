#include <iostream>
#include <string>
using namespace std;

class A{
	public:
		void show(){
			cout << "Hello World!" << endl;
		}
		
		void show(string name){
			cout << "Hello World!, " << name << endl;
		}	
};

int main(){
	A a;

	a.show();
	a.show("Raj");

	return 0;
}