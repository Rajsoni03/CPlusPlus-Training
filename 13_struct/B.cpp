#include <iostream>
using namespace std;

/*
Students
str name[10] = ['raj', 'piyush', ....]
int age[10]  = [10, 11 , ....]
*/

struct student {
	char name[20];
	char rollNo[20];
	int age;
	int Class;
	char email[20];
};


int main(){
	student s1;
	cout << s1.name << endl;
	cout << s1.rollNo << endl;
	cout << s1.age << endl;
	cout << s1.Class << endl;
	cout << s1.email << endl;
	return 0;
}