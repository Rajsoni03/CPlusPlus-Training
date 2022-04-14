#include <iostream>
#include <cstring>
using namespace std;


int main(){
	char str1[20] = "Rajkumar";
	char str2[20] = "";

	// strcpy(str2, str1);

	char str3[20] = "Soni";

	// strcat(str1, " ");
	// strcat(str1, str3);

	// cout << strcmp(str1, str2) << endl;
	// if (strcmp(str1, str2) == 0){
	// 	cout << "Strings are equal" << endl;
	// }
	// else if (strcmp(str1, str2) < 0){
	// 	cout << "str1 < str2" << endl;
	// }
	// else if (strcmp(str1, str2) > 0){
	// 	cout << "str1 > str2" << endl;
	// }
	cout << strchr(str1, 'k') << endl;

	cout << str1 << " - " << strlen(str1) << endl;
	cout << str2 << " - " << strlen(str2) << endl;
	cout << str3 << " - " << strlen(str3) << endl;



	return 0;
}