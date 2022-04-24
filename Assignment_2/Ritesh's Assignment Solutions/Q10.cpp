#include <iostream>
using namespace std;

int main (){
	int a ;
	cin >> a;
	for (int i=a; i>0; i--){
		for (int j=1; j<a+1; j++){
			if (i<=j){
				cout<<"* ";
			}else {
				cout<< ". ";
			}
		}
		cout<<endl;
	}
}