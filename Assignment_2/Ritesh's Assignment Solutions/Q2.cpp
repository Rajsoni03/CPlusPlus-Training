#include <iostream>
#include <array>
using namespace std;


int main (){
	std::array<double,100> fact;
	fact[1]=fact[0]=1.0;
	for (double i = 2; i<=100; i++){
		fact [i]= i*fact[i-1];
	}
	for (double i = 0; i<=100; i++){
		cout << i<<"!"<< fact[i]<< endl;
	}
}