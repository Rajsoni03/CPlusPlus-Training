#include <iostream>
using namespace std;


int main (){
	string year3 [3][12]={{"JAN", "FEB","MAR", "APR", "MAY", "JUN", "JULY", "AUG", "SEP", "OCT", "NOV", "DEC"},
							{"JAN", "FEB","MAR", "APR", "MAY", "JUN", "JULY", "AUG", "SEP", "OCT", "NOV", "DEC"},
							{"JAN", "FEB","MAR", "APR", "MAY", "JUN", "JULY", "AUG", "SEP", "OCT", "NOV", "DEC"}};
	int sell [3][12];
	int threeYsum=0;
	for(int i=0; i<3; i++){
		int sellsum =0;
		cout << "year -> "<<i+1<<endl;
		for (int j=0; j<12; j++){
			cout << "Enter the sell of the month of (No.of books) "<<year3[i][j]<<": ";
			cin>> sell[i][j];
			sellsum+=sell[i][j];
		}
		cout<<endl;
		threeYsum+=sellsum;
		cout <<"total sell of the year "<<i+1<<" : "<<sellsum<< endl;
		cout<<endl;
	}
	cout <<"total sell of the 3year "<< threeYsum;

	
	return 0;
}