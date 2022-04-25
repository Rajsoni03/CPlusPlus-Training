#include <iostream>
#include <string>
using namespace std;

int main (){
	string s ;
	int words=0;
	cout << "Enter words (to stop, type the word done): ";
	while (s!="done"){
		cin>>s;
		words+=1;
	}
	
	cout <<"You entered a total of " <<words<<" words";

}