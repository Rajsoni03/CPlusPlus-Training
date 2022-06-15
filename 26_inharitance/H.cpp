#include <iostream>
using namespace std;

class A{
	public:
		A(){
			cout << "A's Constructor" << endl;
		}
		~A(){
			cout << "A's Distructor" << endl;
		}
};

class B : public A{
	public:
		B(){
			cout << "B's Constructor" << endl;
		}
		~B(){
			cout << "B's Distructor" << endl;
		}
};

class C : public B{
	public:
		C(){
			cout << "C's Constructor" << endl;
		}
		~C(){
			cout << "C's Distructor" << endl;
		}
};

int main(){
	C *c = new C();

	delete c;


	return 0;
}