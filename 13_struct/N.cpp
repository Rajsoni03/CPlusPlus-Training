#include <iostream>
using namespace std;

struct home{
	int rooms;
	bool garden;
} myHome {4, true};


int main(){
	home *ptr = &myHome;
	cout << myHome.rooms << endl;
	cout << myHome.garden << endl;

	cout << (*ptr).rooms << endl;
	cout << (*ptr).garden << endl;

	cout << ptr->rooms << endl;
	cout << ptr->garden << endl;

	return 0;
}