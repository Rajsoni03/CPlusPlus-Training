#include <iostream>
#include <string>
using namespace std;

class Human{
	public:
		string fname;
		string lname;
		string aka;
		int age;

		// Human *this;

		Human(){ // Default Constructor
			cout << "Object is created" << endl;
		}

		Human(string fname, string lname, string aka, int age){ // Parameterized Constructor
			// (*this).fname = fname;
			(*this).fname = fname;
			(*this).lname = lname;
			this->aka = aka;
			this->age = age;
		}

		void info(){ // method
			cout << fname << endl;
			cout << lname << endl;
			cout << aka << endl;
			cout << age << endl;
		}
};

int main(){
	Human piyush("Piyush", "Pandey", "MJ", 20);
	Human ritesh("Ritesh", "Kosta", "Chotu", 22);

	piyush.info();
	ritesh.info();

	return 0;
}