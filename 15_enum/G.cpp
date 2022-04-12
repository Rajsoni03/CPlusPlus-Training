#include <iostream>
using namespace std;

enum {
	Monday = 1, 
	Tuesday, 
	Wednesday, 
	Thursday, 
	Friday, 
	Saturday,
	Sunday
};

int main(){
	int day = Sunday + 2;

	cout << day << endl;
	return 0;
}