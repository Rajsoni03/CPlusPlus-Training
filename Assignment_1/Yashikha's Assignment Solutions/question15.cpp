#include <iostream>
#include<cstring>

using namespace std;
struct pizza_company{
    float diameter;
    char name[20];
    float weight;
};
int main()
{
    pizza_company *c = new pizza_company;
    cout<<"Enter the diameter of the pizza:";
    cin>>(*c).diameter;
    cout<<"Enter the name of the company:";
    cin>>(*c).name,20;
    cout<<"Enter the weight of pizza:";
    cin>>(*c).weight;
    //cin.get();
    cout <<"The diameter of pizza is:"<<(*c).diameter<< endl;
    cout <<"The name of the company:"<<(*c).name<< endl;
    cout <<"The weight of pizza is:"<<(*c).weight<< endl;


    return 0;
}
