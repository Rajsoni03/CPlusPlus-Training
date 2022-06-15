#include <iostream>
using namespace std;

class A{
	public:
		int varA;
		A(int varA): varA(varA){
			cout << "A's Constructor" << endl;
		}
};

class B{
	public:
		int varB;
		B(int varB) : varB(varB){
			cout << "B's Constructor" << endl;
		}
};

class C : public A, public B{
// class C : public B, public A{
// class C : public B, virtual public A{
	public:
		int varC;
		C(int varA, int varB, int varC) : A(varA), B(varB), varC(varC){
			cout << "C's Constructor" << endl;
		}
};

int main(){
	C c(10, 20, 30);

	return 0;
}