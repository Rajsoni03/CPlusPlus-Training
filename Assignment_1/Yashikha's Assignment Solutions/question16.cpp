#include <iostream>

using namespace std;
struct CandyBar{
    string name;
    float weight;
    int calories;
};

int main()
{
    CandyBar*a=new CandyBar[3];
    a[0].name="Macha munch";
    a[0].weight=2.3;
    a[0].calories=350;
    a[1].name="Crispy";
    a[1].weight=4.6;
    a[1].calories=440;
    a[2].name="Ferrari";
    a[2].weight=6.7;
    a[2].calories=460;

    for(int i=0;i<3;i++){
        cout<<"Name : "<<a[i].name<<endl;
        cout<<"Weight : "<<a[i].weight<<endl;
        cout<<"Calories : "<<a[i].calories<<endl;
    }

    return 0;
}
