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

class B : public A{
	public:
		void show(string name, int age){
			cout << "Hello World!, " << name << " and your age is " << age << endl;
		}
};

int main(){
	B obj;

	obj.A::show();
	obj.A::show("Raj");
	obj.show("Raj", 22);

	return 0;
}