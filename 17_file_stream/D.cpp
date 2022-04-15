#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct student{
	string fname;
	string lname;
	int age;
	string email;
};

int main(){
	student s;

	cin >> s.fname >> s.lname >> s.age >> s.email;

	ofstream myfile;
	myfile.open("db.csv", ios::app);

	myfile << s.fname << "," << s.lname << ',';
	myfile << s.age << "," << s.email << '\n';

	myfile.close();

	return 0;
}