#include <iostream>
#include <fstream>
#include <string>
// using namespace std;

int main(){
	std::ifstream cin("myfile.txt");
	std::ofstream cout("myfile.txt");

	cout << "I am Rajkumar." << std::endl;

	std::string str;
	std::getline(cin, str);
	std::cout << str << std::endl;

	cin.close();
	cout.close();
	return 0;
}