#include <iostream>
#include <string>
using namespace std;

int main(){
	int age;
	string name;
	int year;

	cout << "Enter age : ";
	cin >> age;
	cout << "Enter name : ";
	cin.ignore(1, '\n');
	getline(cin, name);
	cout << "Enter year : ";
	cin >> year;

	cout << age << endl;
	cout << name << endl;
	cout << year << endl;


	return 0;
}