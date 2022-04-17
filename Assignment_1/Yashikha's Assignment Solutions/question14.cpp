#include <iostream>

using namespace std;

struct pizza_company{
    char name[20];
    float diameter;
    float weight;
};

int main()
{
    pizza_company c1;
    cout<<"Enter the company name:";
    cin.get(c1.name,20);
    cout<<"Enter the diameter of the pizza:";
    cin>>c1.diameter;
    cout<<"Enter the weight of the pizza:";
    cin>>c1.weight;
    cout<<"The name of the company is:"<<c1.name<<endl;
    cout<<"Diameter of the pizza is:"<<c1.diameter<<endl;
    cout<<"Weight of the pizza is:"<<c1.weight<<endl;

    return 0;
}
