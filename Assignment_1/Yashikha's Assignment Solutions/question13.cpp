#include <iostream>

using namespace std;

struct CandyBar{
	char name[20];
	float weight;
	int calories;
};

int main(){
	int i;
	CandyBar s[3]={{"Macha Munch",2.3,350},{"Crunch",5.6,460},{"Crispy",6.4,430}};

	for(i=0;i<=2;i++){
		cout << s[i].name << endl;
		cout << s[i].weight << endl;
		cout << s[i].calories << endl;
	}
    return 0;
}
