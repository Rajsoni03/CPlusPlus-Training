#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
using namespace std;

struct student{
	int id;
	string fname;
	string lname;
	int age;
	string email;
};

student readdata(int line){
	string str;
	ifstream myfile("db.csv");

	while(line--){ // skip lines
		getline(myfile, str);
	}
	getline(myfile, str); // copy desired line to str
	myfile.close();

	student s; // create empty struct variable

	int start = 0;
	int end = str.find(',', start); 
	int len = end - start;   
	s.id = stoi(str.substr(start, len));

	start = end + 1;
	end = str.find(',', start); // 6
	len = end - start;   // 6 - 0 = 6
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

student searchByID(int id){
	for (int i = 0; i < 6; i++){
		student S = readdata(i);
		if (S.id == id){
			return S;
		}
	}
	student S;
	return S;	
}

student searchByEmail(string email){
	for (int i = 0; i < 6; i++){
		student S = readdata(i);
		if (S.email == email){
			return S;
		}
	}	
	student S;
	return S;
}

int main(){
	// student S = searchByID(2);
	student S = searchByEmail("wrong@gmail.com");
	// student S = readdata(0);
	
	cout << S.id << endl;
	cout << S.fname << endl;
	cout << S.lname << endl;
	cout << S.age << endl;
	cout << S.email << endl << endl;


	return 0;
}