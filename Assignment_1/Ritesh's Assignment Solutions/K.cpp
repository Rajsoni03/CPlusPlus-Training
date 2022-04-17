#include <iostream>
#include <string>
using namespace std;

struct candyBar{
	string name; 
	float weight;
	int kcal;

};
int main (){
	candyBar snack;
	snack.name = "Mocha Munch";
	snack.weight = 2.3;
	snack.kcal= 450;
	cout<<"Name : "<< snack.name<<endl;
	cout<<"Weight : "<< snack.weight<<endl;
	cout<<"Kilo Calori : "<< snack.kcal<<endl;

}