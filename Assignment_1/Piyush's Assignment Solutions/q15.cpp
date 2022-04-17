#include<iostream>
using namespace std;

struct Pizza{
    int diameter;
    string brand;
    int weight;
};
int main(){
    Pizza *snack1 = new Pizza();
    cout<<"Enter name of the Pizza diameter ";
    cin>>snack1->diameter;
    cout<<"Enter weight of the Pizza ";
    cin>>snack1->weight;
    cout<<"Enter diameter of the company ";
    getline(cin,snack1->brand);

    cout<<"diameter: "<<snack1->diameter<<endl;
    // cout<<"Company: "<<snack1->brand<<endl;
    cout<<"Weight: "<<snack1->weight<<endl;

}