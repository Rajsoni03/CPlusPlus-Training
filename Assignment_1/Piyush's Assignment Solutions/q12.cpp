#include<iostream>
using namespace std;

struct CandyBar{
    string brand;
    int weight;
    int calories;
};

int main(){
    CandyBar snack;
    cout<<"Enter the name of the CandyBar ";
    cin>>snack.brand;
    cout<<"Enter the weight of the CandyBar ";
    cin>>snack.weight;
    cout<<"Enter the calories of the CandyBar ";
    cin>>snack.calories;
    cout<<"Brand: "<<snack.brand<<endl;
    cout<<"Weight: "<<snack.weight<<endl;
    cout<<"Calories"<<" "<<snack.calories<<endl;
}