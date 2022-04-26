#include <iostream>
using namespace std;

class Student {
	public:
		const string clg = "GGITS";
		string name;
		int age;

		Student(string name = "", int age = 0): name(name), age(age){}

		void info() const { // const member function
			cout << clg << endl;
			cout << name << endl;
			cout << age << endl;
		}
		
		void setage(int age){
			this->age = age;
		}
};

int main(){
	// const Student s;
	// Student s("raj", 22);
	const Student s("raj", 22);

	s.info();
	// s.setage(20);
	s.info();


	return 0;
}