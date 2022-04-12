#include <iostream>
using namespace std;

enum week{
	Monday, 
	Tuesday, 
	Wednesday, 
	Thursday, 
	Friday, 
	Saturday,
	Sunday
};

int main(){
	week day = Friday;
	day = Sunday;

	cout << day << endl;

	return 0;
}