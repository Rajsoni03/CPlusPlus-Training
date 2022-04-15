#include <iostream>
#include <string>
#include <fstream>
using namespace std;


int main(){
	string fname, lname;
	cin >> fname >> lname;

	ofstream myfile;
	myfile.open("name.txt");

	myfile << fname << " " << lname << '\n';

	myfile.close();

	cout << "Hello, " << fname << " " << lname << endl;

	return 0;
}