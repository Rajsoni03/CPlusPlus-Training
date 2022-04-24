#include <iostream>
#include <string>
using namespace std;

bool isdigitt(int a){
	if(57>=a && a>=48){
		return true;
	}
	return false;
}

int main(){
	double num [10];
	string s ;
	for(int i=0; i<10; i++){
		cin <<s;
		for (int j=0; j<s.size; j++){
			if (isdigitt(s[i])==0){
				break;
			}
		}
	}
	return 0;
}
