#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
	ifstream fin("myfile.txt");

	string s;

	// while(fin >> s){
	// 	cout << s << endl;
	// }

	// while(!fin.eof()){
	// 	fin >> s;
	// 	cout << s << endl;
	// }

	// while(getline(fin, s)){
	// 	cout << s << endl;
	// }

	while(!fin.eof()){
		getline(fin, s);
		cout << s << endl;
	}

	return 0;
}