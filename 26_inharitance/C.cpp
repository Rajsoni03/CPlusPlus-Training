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
	Human(int account, int home, string name){
		this->account = account;
		this->home = home;
		this->name = name;
		cout << "Human Constructor" << endl;
	}
	dispay(){	
		cout << "Human Details" << endl;
		cout << account << endl;
		cout << home << endl;
		cout << name << endl;
	}
};

class Student : public Human{
	private:
		int gf;
	protected:
		int earning;
	public:
		int rollno;	

	Student(int account, int home, string name, int gf, int earning, int rollno) : Human(account, home, name){
		this->gf = gf;
		this->earning = earning;
		this->rollno = rollno;
		cout << "Student Constructor" << endl;
	}
	dispay(){	
		cout << "Student Details" << endl;
		// cout << account << endl;
		cout << home << endl;
		cout << name << endl;

		cout << gf << endl;
		cout << earning << endl;
		cout << rollno << endl;
	}
};


int main(){
	// Human h;
	Student s(10, 2, "Raj", 10, 0, 42);
	s.dispay();
	return 0;
}