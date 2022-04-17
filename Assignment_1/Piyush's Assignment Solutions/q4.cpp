#include<iostream>
using namespace std;

int main(){
    const long long secinyears = 60*60*24*365;
    const long long secinday = 60*60*24;
    const long long secinhour = 60*60;
    const long long secinmin = 60;

    long long sec;
    cout<<"Enter total number of seconds";
    cin>>sec;
    int yearsinsec = sec/secinyears;
    sec = sec%secinyears;
    int daysinsec = sec/secinday;
    sec = sec%secinday;
    int hoursinsec = sec/secinhour;
    sec = sec%secinhour;
    int mininsec = sec/secinmin;
    
    cout<<"Number of year days hour and sec in "<<sec<<" is "<<yearsinsec<<", "<<daysinsec<<", "<<hoursinsec<<", "<<mininsec<<endl;

}