#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
	string s;

	ifstream myfile("db.csv");
	
	while(getline(myfile, s)){
		cout << s << endl;
	}
	
	myfile.close();

	return 0;
}