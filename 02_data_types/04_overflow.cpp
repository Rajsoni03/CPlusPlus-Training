#include <iostream>
#include <climits>
using namespace std;

int main(){
	int piyush = INT_MAX;
	unsigned int sachin = UINT_MAX;

	cout << "Piyush's Bank Balance : " << piyush << endl;
	cout << "Sachin's Bank Balance : " << sachin << endl << endl;

	cout << "Add 1 to both account." << endl;	
	piyush = piyush + 1;
	sachin = sachin + 1;

	cout << "Piyush's Bank Balance : " << piyush << endl;
	cout << "Sachin's Bank Balance : " << sachin << endl << endl;
}