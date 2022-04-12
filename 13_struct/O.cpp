#include <iostream>
using namespace std;

struct home{
	int rooms;
	bool garden;
};

int main(){
	home *kuchbhi = new home{4, true};
	// int *myint = new int{10};

	// int x;
	home y;

	cout << kuchbhi->rooms << endl;
	cout << kuchbhi->garden << endl;

	return 0;
}