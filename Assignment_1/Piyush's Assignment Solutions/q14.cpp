#include<iostream>
using namespace std;

struct Pizza{
    string brand;
    int diameter;
    int weight;
};
int main(){
    Pizza snack1;
    cout<<"Enter name of the Pizza Company ";
    getline(cin,snack1.brand);
    cout<<"Enter diameter of the Pizza ";
    cin>>snack1.diameter;
    cout<<"Enter weight of the Pizza ";
    cin>>snack1.weight;

    cout<<"Company: "<<snack1.brand<<endl;
    cout<<"diameter: "<<snack1.diameter<<endl;
    cout<<"Weight: "<<snack1.weight<<endl;

}