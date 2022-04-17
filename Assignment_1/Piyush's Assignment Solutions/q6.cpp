#include<iostream>
using namespace std;


int main(){
    float km , litres;
    cout<<"Enter number of km you travelled ";
    cin>>km;
    cout<<"Enter Litres of petrol vehicle used ";
    cin>>litres;

    float litresperkm = litres/km;
    float litreper100km = litresperkm * 100;
    cout<<"liters per 100 kilometers is "<<litreper100km<<endl;
    // cout<<litresperkm<<endl;

} 