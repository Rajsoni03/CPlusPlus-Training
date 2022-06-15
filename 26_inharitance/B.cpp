#include <iostream>
#include <string>
using namespace std;

class Human{
	private:
		int account;
	protected:
		int home;
	public:
		string name;
	Human(){
		cout << "Human Constructor" << endl;
	}
};

class Student : public Human{
	private:
		int gf;
	protected:
		int earning;
	public:
		int rollno;	

	Student(){
		cout << "Student Constructor" << endl;
	}
};

class Teacher : public Human{
	private:
		int wife;
	protected:
		int earning;
	public:
		int teacherID;	

	Teacher(){
		cout << "Teacher Constructor" << endl;
	}
};

int main(){
	// Human h;
	Student s;
	Teacher t;
	return 0;
}