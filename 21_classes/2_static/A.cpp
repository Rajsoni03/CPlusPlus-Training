#include <iostream>
#include <string>
using namespace std;

// '.', '->', '::'

class Student{
	public:
		static int count;
		string name;
		int age;
		int roll;
		Student(string name, int age) : name(name), age(age){
			roll = count;
			count++;
		}
		void info(){
			cout << this->name << endl;
			cout << this->age << endl;
			cout << this->roll << endl;
		}
};

int Student::count = 1;

int main(){
	Student s1("raj", 20);
	s1.info();
	Student s2("ritesh", 20);
	s2.info();
	Student s3("piyush", 20);
	s3.info();

	Student *p = new Student("Yashika", 20);
	cout << p->roll << endl;

	cout << s1.count << endl;
	cout << Student::count << endl;
	cout << p->count << endl;

	return 0;
}