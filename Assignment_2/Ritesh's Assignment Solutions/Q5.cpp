#include <iostream>
using namespace std;

int main (){
	string year [12]={"JAN", "FEB","MAR", "APR", "MAY", "JUN", "JULY", "AUG", "SEP", "OCT", "NOV", "DEC"};
	int sell[12];
	int sellsum=0;
	for (int i =0; i<12; i++){
		cout << "Enter the sell of the month of (No.of books) "<<year[i]<<": ";
		cin>> sell[i];
		sellsum+=sell[i];
	}
	cout << endl; 
	cout <<"total sell of the year: "<<sellsum<< endl;


	return 0;
}