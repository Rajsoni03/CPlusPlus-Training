#include <iostream>
#include <string>
using namespace std;

class Human{
	public:
		string fname;
		string lname;
		string aka;
		int age;

		// Human(){};
		Human(){ // Default Constructor
			cout << "Object is created" << endl;
			fname = "";
			lname = "";
			aka = "";
			age = 0;
		}
};

int main(){
	Human piyush;
	piyush.fname = "Piyush";
	piyush.lname = "Pandey";
	piyush.aka = "MJ";
	piyush.age = 20;

	Human ritesh;
	ritesh.fname = "Ritesh";
	ritesh.lname = "Kosta";
	ritesh.aka = "Chotu";
	ritesh.age = 22;

	return 0;
}