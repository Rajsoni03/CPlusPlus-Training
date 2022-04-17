#include <iostream>
#include <string>
using namespace std;

struct candyBar{
	string name;
	int dia; 
	int wth;
};
int main (){

	candyBar *P1 = new candyBar{"Domino", 45 , 500};
	cout<<"pizza Name : "<< P1->name<<endl;
	cout<<"Diameter of pizza : "<< P1->dia<<endl;
	cout<<"Weight of the pizza : "<< P1->wth<<endl;

}