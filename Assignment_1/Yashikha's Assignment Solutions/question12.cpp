#include <iostream>

using namespace std;

struct CandyBar{
	char name[20];
	float weight;
	int calories;
};

int main(){
    CandyBar snack={"Mocha Munch",2.3,350};
    cout<<snack.name<<endl;
    cout<<snack.weight<<endl;
    cout<<snack.calories<<endl;
    return 0;
}
