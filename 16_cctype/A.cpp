#include <iostream>
#include <cctype>
#include <string>
using namespace std;

string text = "Adrenal Vision International producer Adrienne Vismonger announced production of their new 3-D film, a remake of 'My Dinner with Andre,' scheduled for 2013. 'Wait until you see the the new scene with an enraged Collossipede!";

int main(){
	int alphaCount = 0;
	int spaceCount = 0;
	int puncCount  = 0;
	int digitCount = 0;
	int upperCount = 0;
	int lowerCount = 0;

	for (int i = 0; i < text.size(); i++){
		if (isalpha(text[i])) alphaCount++;
		if (isspace(text[i])) spaceCount++;
		if (ispunct(text[i])) puncCount++;
		if (isdigit(text[i])) digitCount++;
		if (isupper(text[i])) upperCount++;
		if (islower(text[i])) lowerCount++;
	}

	cout << "alphaCount : " << alphaCount << endl;
	cout << "spaceCount : " << spaceCount << endl;
	cout << "puncCount  : " << puncCount << endl;
	cout << "digitCount : " << digitCount << endl;
	cout << "upperCount : " << upperCount << endl;
	cout << "lowerCount : " << lowerCount << endl;

	return 0;
}