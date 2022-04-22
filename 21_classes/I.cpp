#include <iostream>
#include <string>
using namespace std;

class Student{
	public:
		string name;
		int rollno;
		string course;
		int sem;

		Student(){
			this->name = "";
			this->rollno = 0;
			this->course = "";
			this->sem = 0;
			cout << "Default" << endl;
		}
		Student(string name){
			this->name = name;
			this->rollno = 0;
			this->course = "";
			this->sem = 0;
		}
		Student(string name, int rollno){
			this->name = name;
			this->rollno = rollno;
			this->course = "";
			this->sem = 0;
		}
		Student(string name, int rollno, string course){
			this->name = name;
			this->rollno = rollno;
			this->course = course;
			this->sem = 0;
		}
		Student(string name, int rollno, string course, int sem){
			this->name = name;
			this->rollno = rollno;
			this->course = course;
			this->sem = sem;
		}
};

int main(){
	Student s1;
	Student s2("Raj");
	Student s3("Raj", 10);
	Student s4("Raj", 10, "B.Tech");
	Student s5("Raj", 10, "B.Tech", 6);

	return 0;
}