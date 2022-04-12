#include <iostream>
using namespace std;

struct student{
	char name;
	int age;
	union {
		char pan;
		int aadhar;
	} id;
};

int main(){
	student s1;
	s1.name = 'R';
	s1.age = 22;
	// s1.id.pan = 'P';
	s1.id.aadhar = 1000;

	cout << s1.name << endl;
	cout << s1.age << endl;
	cout << s1.id.pan << endl;
	cout << s1.id.aadhar << endl;

	return 0;
}