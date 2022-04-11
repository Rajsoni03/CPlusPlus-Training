#include <iostream>
using namespace std;

// Array of Struct (AoS)
struct student{
	char name[10];
	int age;
};

void print(student s){
	cout << s.name << endl;
	cout << s.age << endl;	
}

int main(){
	student S[2] = {{"Raj", 22}, {"Piyush", 20}};

	print(S[0]);
	print(S[1]);


	return 0;
}