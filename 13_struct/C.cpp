#include <iostream>
using namespace std;

struct student {
	char name[20];
	char rollNo[20];
	int age;
	int Class;
	char email[40];
};


int main(){
	struct student s1 = {"Raj", "0206IT191042", 22, 6, "rajksoni029@gmail.com"};
	student s2 {"Ritesh", "0206IT191032", 22, 8, "ritesh@gmail.com"}; // C++ 11

	cout << s1.name << endl;
	cout << s1.rollNo << endl;
	cout << s1.age << endl;
	cout << s1.Class << endl;
	cout << s1.email << endl;
	return 0;
}