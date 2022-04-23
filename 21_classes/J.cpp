#include <iostream>
#include <string>
using namespace std;

class Account{
	private:
		int _ammount;
	public:
		string name;
		int acc_no;

		Account(){
			name = "";
			acc_no = 0;
			_ammount = 0;
		}

		Account(string name, int acc_no, int _ammount){
			this->name = name;
			this->acc_no = acc_no;
			this->_ammount = _ammount;
		}		

		void info(){
			cout << name << endl;
			cout << acc_no << endl;
			cout << _ammount << endl;
		}
		
};

int main(){

	Account a1("raj", 1, 100);

	// a1.name = "raj";
	// a1.acc_no = 1;
	// a1._ammount = 100;

	// a1._ammount = 200;

	a1.info();

	return 0;
}