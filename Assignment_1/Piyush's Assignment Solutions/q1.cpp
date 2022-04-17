#include<iostream>
using namespace std;


const int inchesinfeet = 12;

int main(){
    int height;
    int feet,inches;
    cout<<"Enter your height in inches "<<endl;
    cin>>height;
    feet = height/inchesinfeet;
    inches = height%inchesinfeet;
    cout<<"Height after conversion in feet and inches is "<<feet<<" feet and "<<inches<< " inches"<<endl;
}