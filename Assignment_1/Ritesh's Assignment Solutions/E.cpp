#include <iostream>
using namespace std;

float mgToLtr100Km(float mile){
	return ((3.785411784)/(mile*1.6))*100;
}
float ltr100KmtoMg(float liters){
	return (100000/1609.344)/(liters/3.785411784);
}

int main (){
	float m , ltr;
	cin >>m>>ltr;
	cout <<mgToLtr100Km(m)<<endl;
	cout <<ltr100KmtoMg(ltr)<<endl;

}