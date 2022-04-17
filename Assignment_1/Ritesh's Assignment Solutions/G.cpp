#include <iostream>
#include <string>
using namespace std;

int main (){
	string name;
	string dessert;

	cout << "Enter your name: \n";
	getline(cin,name);
	cout << "Enter your favrouit dessert :\n";
	getline(cin,dessert);
	cout<< "I Have some delicious "<<dessert;
	cout<<" for you, "<<name<<".\n";
	return 0;
}