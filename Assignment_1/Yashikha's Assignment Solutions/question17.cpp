#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    float time1;
    float time2;
    float time3;
    cout << "Enter  three times for 40-yd:"<<endl;
    cout<<"Enter time 1: ";
    cin>>time1;
    cout << "Enter time 2: ";
    cin>>time2;
    cout << "Enter time 3: ";
    cin>>time3;
    float avg;
    avg=(time1+time2+time3)/3;
    cout<<"Entered times are: "<<endl;
    cout<<"Time 1:"<<time1<<endl;
    cout<<"Time 2:"<<time2<<endl;
    cout<<"Time 3:"<<time3<<endl;
    cout<<"The average is: "<<avg<<endl;
    return 0;
}