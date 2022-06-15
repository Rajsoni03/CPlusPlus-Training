#include <iostream>
using namespace std;

class A{
	public:
		int var;
		void display(){
			cout << "A's Display" << endl;
		}
};

class B : virtual public A{
	public:
		void display(){
			cout << "B's Display" << endl;
		}
};

class C : virtual public A{
	public:
		void display(){
			cout << "C's Display" << endl;
		}
};

class D : public B, public C{
	public:
		void display(){
			// A::display();
			// B::display();
			// C::display();
			cout << "D's Display" << endl;
		}
};


int main(){
	D d;
	d.display();
	d.A::display();
	d.B::display();
	d.C::display();

	return 0;
}