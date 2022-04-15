#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
	ifstream myfile;
	myfile.open("db.csv");

	string s;
	// myfile >> s;
	getline(myfile, s);

	cout << s; 
	myfile.close();

	return 0;
}