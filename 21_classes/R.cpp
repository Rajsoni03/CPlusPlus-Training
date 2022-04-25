#include <iostream>
#include <string>
using namespace std;

class Student {
	public:
		string name;
		int age;

		// Student(string name, int age){
		// 	this->name = name;
		// 	this->age = age;
		// }

		Student(string name, int age) : name(name), age(age) {

		}
};


int main(){
	Student s1("raj", 22);

	cout << s1.name << endl;
	cout << s1.age << endl;

	return 0;
}