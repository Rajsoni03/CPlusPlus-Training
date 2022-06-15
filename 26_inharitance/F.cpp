#include <iostream>
using namespace std;

class A{
	public:
		int var;
};

class B : virtual public A{};

class C : public virtual A{};

class D : public B, public C{};


int main(){
	D d;

	d.var = 10;
	return 0;
}