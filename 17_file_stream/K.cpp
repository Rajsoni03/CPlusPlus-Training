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

	// str = "sachin,gupta,20,sachin@gmail.com\0";
	// 	                      ^               ^

	student s; // create empty struct variable

	int start = 0;
	int end = str.find(',', start); // 6
	int len = end - start;   // 6 - 0 = 6
	s.fname = str.substr(start, len);

	start = end+1;  // 6 + 1 = 7
	end = str.find(',', start); // 12
	len = end - start;  // 12 - 7 = 5
	s.lname = str.substr(start, len);

	start = end+1;  // 12 + 1 = 13
	end = str.find(',', start); // 15
	len = end - start;  // 15 - 13 = 2
	s.age = stoi(str.substr(start, len)); // stoi("20")

	start = end+1;  // 15 + 1 = 16
	end = str.find(',', start); // 32
	len = end - start; // 32 - 16 = 16
	s.email = str.substr(start, len);

	return s;
}

int main(){
	student S = readdata("db.csv", 1);
	
	cout << S.fname << endl;
	cout << S.lname << endl;
	cout << S.age << endl;
	cout << S.email << endl;

	return 0;
}