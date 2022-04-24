#include <iostream>
#include <string>
using namespace std;

struct car{
	string info;
	int year;
};

int main (){
	car a1;
	car a2;
	cout << "car #1"<<endl;
	a1.info;
	a1.year;
	cout << "please Enter the make: ";
	cin.ignore(1, '\n');
	getline(cin , a1.info);
	cout << "please Enter the year Made: ";
	cin >> a1.year;

	cout << "\ncar #2"<<endl;
	a2.info;
	a2.year;
	cout << "please Enter the make: ";
	cin.ignore(1, '\n');
	getline(cin , a2.info);
	cout << "please Enter the year Made: ";
	cin >> a2.year;
	cout << endl;
	cout << "here is your collection: "<< endl;
	cout << a1.year<<" "<< a1.info<< endl;
	cout << a2.year<<" "<< a2.info<< endl;



}