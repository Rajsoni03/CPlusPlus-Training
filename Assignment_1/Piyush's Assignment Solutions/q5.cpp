#include<iostream>
using namespace std;

int main(){
    double worldpop, uspop;
    cout<<"Enter the world population ";
    cin>>worldpop;
    cout<<"Enter the US population ";
    cin>>uspop;
    double ans = (uspop/worldpop)*100;
    cout<<"The population of the US is "<<ans<<" %"<<" of the world population";
}