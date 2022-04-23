#include <iostream>
#include <string>
using namespace std;

class Student{
	public:
		string name;
		int age;

		Student(){
			cout << "Default" << endl;
		}
		Student(string name, int age){
			this->name = name;
			this->age = age;
			cout << "Parameterized" << endl;
		}
};


int main(){
	Student s1;
	// Student s2(); // Funtion declaration 
	Student s3{}; // uniform initilizer 
	Student s4 = {};

	Student s5{"Raj", 20};
	Student s6 = {"Piyush", 20};
	Student s7("Ritesh", 20);


	return 0;
}