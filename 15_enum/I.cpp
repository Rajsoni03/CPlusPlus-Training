#include <iostream>
using namespace std;

enum class week{
	Monday = 1, 
	Tuesday, 
	Wednesday, 
	Thursday, 
	Friday, 
	Saturday,
	Sunday
};

int main(){
	week day = week::Sunday;

	cout << sizeof day << endl;
	cout << (int)day << endl;

	return 0;
}