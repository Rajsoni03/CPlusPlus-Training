#include <iostream>
#include <string>
using namespace std;

int main(){
	char arr[] = "I am Raj";
	cout << arr << endl;

	string s1 = "Hii...";

	cout << s1 << endl;
	cout << s1.size() << endl;
	cout << s1.length() << endl;

	cout << s1[1] << endl;
	cout << s1.at(1) << endl;
	cout << s1.front() << endl;
	cout << s1.back() << endl;

	s1 += ", Hello";

	cout << s1 << endl;
	cout << s1.size() << endl;

	s1.append("\nOkay Bye..");
	cout << s1 << endl;
	cout << s1.size() << endl;

	s1.push_back('.');
	cout << s1 << endl;
	cout << s1.size() << endl;

	s1.pop_back();
	cout << s1 << endl;
	cout << s1.size() << endl;

	string s2;
	s2.insert(0, s1);
	cout << s2 << endl;
	cout << s2.size() << endl;

	s2.insert(7, "raj");
	cout << s2 << endl;
	cout << s2.size() << endl;
	
	return 0;
}