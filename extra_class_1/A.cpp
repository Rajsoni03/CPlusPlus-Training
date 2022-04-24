#include <iostream>
#include <string>
using namespace std;

string * func(){
	// string *aos = new string[2]{"raj", "soni"};
	string aos[2] = {"raj", "soni"};
	return aos;
}

int main(){
	string *aos = func();

	for (int i = 0; i < 2; ++i){
		cout << aos[i] << endl;
	}

	return 0;
}