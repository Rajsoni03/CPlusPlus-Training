#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void readline(string fileName, int line){
	string s;
	ifstream myfile(fileName);

	// for (int i = 0; i < line+1; ++i){
	// 	getline(myfile, s);
	// }
	while(line--){ // 0
		getline(myfile, s);
	}
	getline(myfile, s);
	cout << s; 

	myfile.close();
}

int main(){
	readline("db.csv", 2);
	return 0;
}