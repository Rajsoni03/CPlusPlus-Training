#include <iostream>
using namespace std;

int main (){
	int a ;
	int count = 0;
	int sum=0;
	cout <<"Enter Num(for Terminate 0): "<<endl;
	cin >> a;
	while (a!=0){
		count+=1;
		sum+=a;
		cout<< "cumulative sum of the entries to date "<<count<<"->"<< sum<< endl;
		cout <<"Enter Num(for Terminate 0): "<<endl;
		cin >> a;
	}
}