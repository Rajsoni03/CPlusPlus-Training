#include <iostream>
#include <string>
using namespace std;

class Student{
	public:
		enum {first = 1, second, third, forth};
		string name;
		int age;
		int year;
		Student(string name, int age) : name(name), age(age){
			year = first;
		}
		void info(){
			cout << this->name << endl;
			cout << this->age << endl;
			cout << this->year << endl;
		}
};

int main(){
	Student s1("raj", 20);

	s1.info();

	return 0;
}