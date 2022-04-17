#include <iostream>

using namespace std;

int main()
{
    int degree;
    int minute;
    int second;
    float a;
    float b;
    float c;
    cout<<"Enter a latitude in degrees, minutes and seconds:"<<endl;
    cout<<"First enter degrees:";
    cin>>degree;
    cout<<"Enter minutes:";
    cin>>minute;
    cout<<"Enter seconds:";
    cin>>second;
    a= float(minute)/60;
    b= float(second)/3600;
    c= float(degree+a+b);
    cout<<degree<<"degrees,"<<" "<<minute<<"minutes,"<<" "<<second<<"seconds ="<<" "<<c<<" degrees"<<endl;

    return 0;
}
