#include <iostream>
using namespace std;

int main (){
	int a,b;
	int sum=0;
	cout << "Enter first Num: "<<endl;
	cin>>a;
	cout << "Enter second Num: "<<endl;
	cin>>b;
	for (int i =a; i<b+1; i++){
		sum+=i;
	}
	cout<<"the sum ofall the integers from "<<a<<" through "<<b<<" is : "<<sum;
}