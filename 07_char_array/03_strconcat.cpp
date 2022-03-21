#include <iostream>
using namespace std;

int strlen(char arr[]){
	int index = 0;
	char ele = arr[index];

	while(ele != '\0'){
		ele = arr[++index];
	}
	return index;
}


bool strcat(char dst[], int dst_size, char str1[], char str2[]){
	int str1_size = strlen(str1);
	int str2_size = strlen(str2);

	if (dst_size > str1_size + str2_size){
		int n = 0;
		int i = 0;
		while(str1[i] != '\0'){
			dst[n] = str1[i];
			i++;
			n++;
		}
		i = 0;
		while(str2[i] != 0){
			dst[n] = str2[i];
			i++;
			n++;
		}
		dst[n] = '\0';
		return true;
	}
	return false;
}

bool strcomp(char str1[], char str2[]){
	// "raj\0kumar"
	// "raj"
	int i = 0;
	while(str1[i]==str2[i]){
		i++;
		if (str1[i]!='\0' && str2[i]!='\0') return true;
	}
	return false;
}

int strchar(){
	// "raj" -> 0
	// "Raj" -> 0
	// "28-Raj" -> 3
	// "_9^%(Raj" -> 5
}

int main(){
	char str1[10] = "raj\0kumar";
	// str1[3] = 0;
	char str2[5] = "raj";
	char arr[1] = "";

	// cout << arr << endl;

	// cout << &str1 << endl;
	// cout << &str2 << endl;
	// cout << &arr << endl;

	char name[9];

	// cout << str1 << endl;
	// cout << str2 << endl;

	// if (strcat(name, 9, str1, str2)){
	// 	cout << name << endl;	
	// }

	cout << strcomp(str1, str2);


	return 0;
}
