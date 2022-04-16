#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
	ifstream fin("myfile.txt", ios::app);
	string s;

	if (fin.fail()){
		cout << "Error" << endl;
	}

	while(!fin.bad()){
		fin >> s;
		cout << s << endl;
		if (fin.eof()){
			break;
		}
	}

	while(fin.good()){
		fin >> s;
		cout << s << endl;
		if (fin.eof()){
			break;
		}
	}

	if (fin.fail()){
		cout << "Error" << endl;
	}
	
}