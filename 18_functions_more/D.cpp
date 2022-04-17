#include <iostream>
using namespace std;

char* incre(char str[]){
	int size = 0;
	for (char *i = str; (*i) != '\0'; i++){
		cout << *i;
		size++;
	}
	// while(str[size] != '\0'){
	// 	cout << str[size];
	// 	size++;
	// }
	cout << endl;
	char *arr = new char[size*2];

	int count = 0;
	for (char *i = str; (*i) != '\0'; i++){
		arr[count] = *i;
		arr[count+1] = ' ';
		count += 2;
	}
	arr[count] = '\0';
	return arr;
}

int main(){
	char str[20] = "Raj Soni";

	char *arr = incre(str);
	cout << arr << endl;
	return 0;
}