#include <iostream>
#include <string>
using namespace std;

struct candyBar{
	string name; 
	float weight;
	int kcal;

};
int main (){
	candyBar snack = {"Mocha Munch",2.3,350};
	cout<<"Name : "<< snack.name<<endl;
	cout<<"Weight : "<< snack.weight<<endl;
	cout<<"Kilo Calori : "<< snack.kcal<<endl;

}