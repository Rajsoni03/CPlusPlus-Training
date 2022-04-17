#include <iostream>
#include <cstring>
using namespace std;

int main (){
	char name[10] ;
	char lname[10];

	cout<<"what is your first name? "<<endl;
	cin>>name;
	cout<<"what is your last name? "<<endl;
	cin>>lname;
	strcat(lname,",");

	cout <<strcat(lname,name)<<endl;

}