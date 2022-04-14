#include <iostream>
using namespace std;

int isdigit(int c){
	if (c >= 48 && c <= 57) return 1;
	else return 0;
}


int main(){
	cout << isdigit('9');
	return 0;
}