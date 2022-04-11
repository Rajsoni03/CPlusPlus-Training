#include <iostream>
using namespace std;

struct {
	char name[10];
	int age;
} raj {
	"raj",
	22
}, piyush {
	"Piyush",
	20
};

int main(){
	cout << raj.name << endl;
	cout << raj.age << endl;
	cout << piyush.name << endl;
	cout << piyush.age << endl;
	return 0;
}