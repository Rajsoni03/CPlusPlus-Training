#include <iostream>
using namespace std;

int main (){
	// in 1st year
	// Daphne invests 110$ and Cleo invests 105$
	int Dinvest = 100;
	float Cinvest = 100;
	short years = 1;
	while (Cinvest<=Dinvest){
		years += 1;
		Dinvest += 10;
		Cinvest = Cinvest + Cinvest*0.05;
	}
	cout <<years<< " years it takes for the value of Cleo's investment to exceed the value of Daphne's investment "<< endl;
	cout<<"value of Daphne's investment : " << Dinvest<< endl;
	cout<<"value of Cleo's investment : " << Cinvest<< endl;


	return 0;
}