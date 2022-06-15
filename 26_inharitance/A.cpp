#include <iostream>
using namespace std;

class A{
	private:
		int pri_var;
	protected:
		int pro_var;
	public:
		int pub_var;
		A(){
			cout << "Default Constructor" << endl;
		};
};

class B : public A{
	
};


int main(){
	B b;
	b.pub_var = 20;
	// b.pri_var = 10;

	cout << b.pub_var;

	return 0;
}