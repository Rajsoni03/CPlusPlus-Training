#include <iostream>
#include <string>
using namespace std;


int main(){
	int income ;
	cout<< "Enter your Income: ";
	cin >> income;
	float tax;
	while (income>=0){
		if (income >=35000){
			tax = income*0.20;
		}else if (income >=20000){
			tax = income*0.15;
		}else if (income >=10000){
			tax = income*0.10;
		}else if (income >=5000){
			tax +=0;
		}
		cout<< "Enter your Income: ";
		cin >> income;

	}
	return 0;
}
