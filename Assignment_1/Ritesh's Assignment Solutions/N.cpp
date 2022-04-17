#include <iostream>
#include <string>
using namespace std;

struct candyBar{
	string name;
	int dia; 
	int wth;
};

void display(candyBar A){
	cout<<"pizza Name : "<< A.name<<endl;
	cout<<"Diameter of pizza : "<< A.dia<<endl;
	cout<<"Weight of the pizza : "<< A.wth<<endl;
} 
int main (){

	candyBar P1 [3] ={{"Domino" ,25,400},{"Red Hat" ,40,600},{"Domino" ,50,800}};
	display(P1[0]);
	display(P1[1]);
	display(P1[2]);
}