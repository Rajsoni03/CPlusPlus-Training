#include <iostream>
#include <string>
using namespace std;

int main (){
	string name ;
	string lname;

	cout<<"what is your first name? "<<endl;
	cin>>name;
	cout<<"what is your last name? "<<endl;
	cin>>lname;

	cout <<lname+","+name<<endl;

}