#include <iostream>
#include <string>
using namespace std;

class Student{
	public:
		const string college = "GGITS";
		string name;
		int age;
		Student(string name, int age) : name(name), age(age){}
};

int main(){
	Student s1("raj", 20);

	cout << s1.college << endl;

	return 0;
}