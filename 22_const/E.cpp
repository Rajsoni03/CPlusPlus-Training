#include <iostream>
using namespace std;

class Student {
	public:
		const string clg = "GGITS";
		string name;
		int age;

		Student(string name = "", int age = 0): name(name), age(age){}

		void info(){
			// clg = "Global";
			cout << clg << endl;
			cout << name << endl;
			cout << age << endl;
		}
};

int main(){
	Student s("raj", 22);
	s.info();
	return 0;
}