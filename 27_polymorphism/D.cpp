#include <iostream>
using namespace std;

class A{
	public:
		// member variable
		int var;

		A(int var = 0){
			this->var = var;
		}
		
		A operator+(A obj){
			A a;
			a.var = this->var + obj.var;
			return a;
		}

		A operator+(int val){
			A a;
			a.var = this->var + val;
			return a;
		}	

		friend A operator+(int val, A obj){
			A a;
			a.var = val + obj.var;
			return a;
		}
};


int main(){
	A a1(10);
	A a2(20);

	// A a3 = a1 + 100;
	A a3 = 100 + a1; // operator+(int, A);

	cout << a1.var << endl;
	cout << a2.var << endl;
	cout << a3.var << endl;

	return 0;
}