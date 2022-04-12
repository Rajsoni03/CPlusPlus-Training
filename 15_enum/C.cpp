#include <iostream>
using namespace std;

enum week{
	Monday = 1, 
	Tuesday, 
	Wednesday, 
	Thursday, 
	Friday, 
	Saturday,
	Sunday
};

int main(){
	week day = Sunday;

	cout << day << endl;

	return 0;
}