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

bool writeFile(string fileName, student data){
	ofstream myfile(fileName, ios::app);
	if (myfile.is_open()){
		myfile << data.fname << ',' << data.lname << ',';
		myfile << data.age  << ',' << data.email << '\n';
		myfile.close();
		return true;
	}
	myfile.close();
	return false;
}

int main(){
	student s;
	cin >> s.fname >> s.lname >> s.age >> s.email;

	cout << writeFile("db.csv", s);

	return 0;
}