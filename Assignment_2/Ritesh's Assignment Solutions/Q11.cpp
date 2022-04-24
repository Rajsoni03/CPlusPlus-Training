#include <iostream>
#include <string>
using namespace std;

char Q11(int a){

	if(97<=a && a<=122){
		return char(a-32);
	}else if(65<=a && a<=90){
		return char(a+32);
	}
	return a;
}

int main(){
	string info;
	cout << "Enter words : ";
	cin.ignore(1, '\n');
	getline(cin , info);
	int n = info.size();
	for (int i=0; i<n; i++){
		if (info[i]==64){
		break;
		}
		cout << Q11(info[i]);
	}
	return 0;
}
