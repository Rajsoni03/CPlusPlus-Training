#include <iostream>
#include <cctype>
#include <string>
using namespace std;

string text = "Hello, World!";

int main(){
	char temp;
	for (int i = 0; i < text.size(); i++){
		// temp = tolower(text[i]);
		temp = toupper(text[i]);
		cout << temp;
	}

	return 0;
}