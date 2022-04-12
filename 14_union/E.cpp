#include <iostream>
using namespace std;

struct student{
	char name;
	int age;
	
	union {
		char pan;
		int aadhar;
	};
};

int main(){
	student s1;
	s1.name = 'R';
	s1.age = 22;

	// s1.pan = 'P';
	s1.aadhar = 1000;

	cout << s1.name << endl;
	cout << s1.age << endl;
	cout << s1.pan << endl;
	cout << s1.aadhar << endl;

	return 0;
}