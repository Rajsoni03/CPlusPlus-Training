#include <iostream>
#include <string>
using namespace std;

class Student{
	public:
		static const string college;
		string name;
		int age;
		Student(string name, int age) : name(name), age(age){}
};

const string Student::college = "GGITS";

int main(){
	Student s1("raj", 20);

	cout << s1.college << endl;
	cout << Student::college << endl;
	s1.college = "Global";

	return 0;
}