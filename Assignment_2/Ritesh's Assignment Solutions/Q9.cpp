#include <iostream>
#include <string>
using namespace std;

int main (){
	string s ;
	cout << "Enter words (to stop, type the word done): ";
	cin.ignore(1, '\n');
	getline(cin , s);
	int len=s.find("done");
	int words=0;
	for (int i=0; i<len; i++){
		if (s[i]==' '){
			words+=1;
		}
	}
	cout <<"You entered a total of " <<words<<" words";

}