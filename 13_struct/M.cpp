#include <iostream>
using namespace std;

// Struct of Array (SoA)
struct student{
	char name[2][10];
	int age[2];
};

void print(student s){
	cout << s.name[0] << endl;
	cout << s.age[0] << endl;	
	cout << s.name[1] << endl;
	cout << s.age[1] << endl;	
}

int main(){
	student S = {{"Raj", "Piyush"}, {22, 20}};
	print(S);
	return 0;
}