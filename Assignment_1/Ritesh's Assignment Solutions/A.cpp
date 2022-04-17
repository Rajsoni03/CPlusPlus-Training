#include <iostream>
using namespace std;

int main (){
	int a;
	cin>>a ;
	const float feet = a/12.0;
	const float cm = a*2.54;
	cout <<a<<" inch to feet : "<<feet<<endl;
	cout <<a<<" inch to cm : "<<cm<<endl;
}