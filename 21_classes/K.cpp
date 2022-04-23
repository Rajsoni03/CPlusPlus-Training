#include <iostream>
#include <string>
using namespace std;

class Account{
	private:
		int _ammount;
		int _pass;
	public:
		string name;
		int acc_no;

		Account(){
			name = "";
			acc_no = 0;
			_ammount = 0;
		}

		Account(string name, int acc_no, int _ammount, int _pass){
			this->name = name;
			this->acc_no = acc_no;
			this->_ammount = _ammount;
			this->_pass = _pass;
		}		

		void set_ammount(int _ammount){
			this->_ammount = _ammount;
		}

		int get_ammount(int _pass){
			if (_pass == this->_pass)
				return _ammount;
			else{
				cout << "wrong password" << endl;
				return -1;
			}
		}

		void info(int _pass){
			if (_pass == this->_pass){
				cout << name << endl;
				cout << acc_no << endl;
				cout << _ammount << endl;
			}
			else{
				cout << "wrong password" << endl;
			}
		}
		
};

int main(){

	Account a1("raj", 1, 100, 0000);

	// a1.name = "Rajkumar";
	// a1.acc_no = 200;

	// cout << a1._ammount << endl;
	cout << a1.get_ammount(0000) << endl;

	// a1.get_ammount(1234) = 2090;

	// a1._ammount = 200;
	// a1.set_ammount(300);

	a1.info(0000);

	return 0;
}