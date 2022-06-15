#include <iostream>
using namespace std;

class Student {
	public:
		const string clg = "GGITS";
		string name;
		int age;

		Student(string name = "", int age = 0): name(name), age(age){}

		void info(){
			cout << clg << endl;
			cout << name << endl;
			cout << age << endl;
		}
};

int main(){
	// const Student s;
	const Student s("raj", 22);

	cout << s.clg << endl;
	cout << s.name << endl;
	cout << s.age << endl;

	s.age = 20; // error

	return 0;
}