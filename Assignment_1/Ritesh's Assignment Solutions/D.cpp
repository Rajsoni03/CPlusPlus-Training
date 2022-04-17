#include <iostream>
using namespace std;

int main (){
	
	long long WP;
	long long india;
	cout << "Enter the world's population: "<<endl;
	cin >>WP;
	cout << "Enter the India's population: "<<endl;
	cin >>india;
	float a = (india *100.0)/WP;
	cout<<"the population of the india "<<a<<" percent of the World's population"<<endl;
}