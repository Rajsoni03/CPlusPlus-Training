#include <iostream>
using namespace std;

int main (){
	// in 1st year
	// Daphne invests 110$ and Cleo invests 105$
	int Dinvest =110;
	float Cinvest = 105;
	short years =1;
	while (Cinvest<=Dinvest){
		years+=1;
		Dinvest += 10;
		Cinvest = Cinvest+ Cinvest*.05;
	}
	cout << years<< " years it takes for the value of Cleo's investment to exceed the value of Daphne's investment "<< endl;
	cout<<"value of Daphne's investment : " << Dinvest<< endl;
	cout<<"value of Cleo's investment : " << Cinvest<< endl;


	return 0;
}