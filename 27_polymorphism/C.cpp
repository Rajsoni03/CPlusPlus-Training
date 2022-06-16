#include <iostream>
using namespace std;

class A{
	public:
		// member variable
		int var;

		A(int var = 0){
			this->var = var;
		}
		A addObj(A obj){
			A newObj;
			newObj.var = this->var + obj.var;
			return newObj;
		}
		A operator+(A obj){
			A a;
			a.var = this->var + obj.var;
			return a;
		}
		A operator+(int val){
			A newObj;
			newObj.var = this->var + val;
			return newObj;
		}
		A operator*(A obj){
			A newObj;
			newObj.var = this->var + obj.var;
			return newObj;
		}
		bool operator==(A obj){
			return this->var == obj.var;
		}
		bool operator==(A obj){
			return this->var == obj.var;
		}
};

int main(){
	A a1(10);
	A a2(20);

	A a3 = a1 + a2;
	A a4 = a1 + 20;
	// A a3 = a1.addObj(a2);

	// A a4 = a1 + a2 + a3;
	// A a4 = a1.operator+(a2 + a3);
	// A a4 = a1.operator+(a2.operator+(a3));

	A a5 = a1 * a2;

	cout << a1.var << endl;
	cout << a2.var << endl;
	cout << a3.var << endl;
	cout << a4.var << endl;
	cout << a5.var << endl;

	bool ans = a5==a4;
	cout << ans << endl;


	return 0;
}