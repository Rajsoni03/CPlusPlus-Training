#include <iostream>
#include <cstring>
#include <string>
using namespace std;

// struct String{
// 	char *str;
// };

char func(string stringSend, string stringRec){
	char answer = -1;

	for (int i = 0; i < stringRec.size(); i++){
		if (stringSend[i] != stringRec[i]){
			answer = stringSend[i];
			break;
		}
	}
	if (answer == -1){
		answer = stringSend[stringSend.size()-1];
	}
	return answer;
}


int main(){

	cout << func("aaaaabaa", "aaaaaaa"); 
	return 0;
}