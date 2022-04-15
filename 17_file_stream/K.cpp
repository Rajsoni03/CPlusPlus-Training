#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
using namespace std;

struct student{
	string fname;
	string lname;
	int age;
	string email;
};

student readdata(string fileName, int line){
	// start code here

	
}

int main(){
	student s = readdata("db.csv", 5);

	cout << s.fname << endl;
	cout << s.lname << endl;
	cout << s.age << endl;
	cout << s.email << endl;

	return 0;
}