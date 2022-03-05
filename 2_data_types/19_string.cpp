#include <iostream>
#include <string>
using namespace std;

int main(){
	// string fname;
	// string lname;
	// cin >> fname >> lname;
	// cout << fname << ' ' << lname << endl;

	// string name;
	// getline(cin, name);
	// cout << name << endl;

	// char a;
	// cin.get(a); 
	// while (a!='\n'){
	// 	cout.put(a);
	// 	cin.get(a);
	// }
	
	char a;
	cin.get(a); 
	while (a!='\n' && a!=' '){
		cout.put(a);
		cin.get(a);
	}

}