#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
	fstream myFile("myfile.txt", ios::in | ios::out);

	myFile << "Hello, World!" << endl;

	string str;
	getline(myfile, str);

	cout << str << endl;


	return 0;
}