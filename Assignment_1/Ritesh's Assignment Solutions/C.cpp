#include <iostream>
using namespace std;

int main (){
	
	int a;

	cout<<"Enter Seconds: ";
	cin>>a;
	int days = a/(24*60*60);
	int hour = (a%(24*60*60))/(60*60);
	int minut = ((a%(24*60*60))%(60*60))/60;
	int sec = ((a%(24*60*60))%(60*60))%60;

	cout<<a<<" Second = "<< days<<" Days "<< hour<<" Hours "<< minut<<" Minut "<< sec<<" Second "<<endl;

}