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
	string str;
	ifstream myfile(fileName);

	while(line--){ // skip lines
		getline(myfile, str);
	}
	getline(myfile, str); // copy desired line to str
	myfile.close();

	student s; // create empty struct variable

	int start = 0;
	int end = str.find(',');
	int len = end - start;
	s.fname = str.substr(start, len);

	start = end+1;
	end = str.find(',', start);
	len = end - start;
	s.lname = str.substr(start, len);

	start = end+1;
	end = str.find(',', start);
	len = end - start;
	s.age = stoi(str.substr(start, len));

	start = end+1;
	end = str.find(',', start);
	len = end - start;
	s.email = str.substr(start, len);

	return s;
}

int main(){
	student s = readdata("db.csv", 5);

	cout << s.fname << endl;
	cout << s.lname << endl;
	cout << s.age << endl;
	cout << s.email << endl;

	return 0;
}