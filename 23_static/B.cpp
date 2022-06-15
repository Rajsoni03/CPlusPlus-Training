#include <iostream>
#include <string>
using namespace std;

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
			cout << this->roll << endl;  // non static
			cout << this->count << endl; // static 
		}
		static void display(){
			cout << "count - " << count << endl;
			// cout << name << endl; // Fails
		}
};

int Student::count = 1;

int main(){
	// Student s1("raj", 20);
	// s1.info();
	// s1.display();
	Student::display();


	return 0;
}