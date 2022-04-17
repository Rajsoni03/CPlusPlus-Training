#include <iostream>
#include <string>
using namespace std;

int main (){
	string name,lname;
	char grade ;
	int age;
	cout<<"what is your first name? "<<endl;
	cin>>name;
	cout<<"what is your last name? "<<endl;
	cin>>lname;
	cout<<"What letter grade do you deserve? "<<endl;
	cin>>grade;
	cout<<"what is your age: "<<endl;
	cin>>age;

	cout<<"Name: "<<lname<<","<<name<<endl;
	cout<<"Grade: "<<(char)(grade+1)<<endl;
	cout << "Age : "<< age<<endl;

}