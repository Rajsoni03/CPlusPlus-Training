#include <iostream>

using namespace std;

int main()
{
    long long a;
    long long b;
    cout<<"Enter the world's population:-";
    cin>>a;
    cout<<"Enter the population of India:-";
    cin>>b;
    double p;
    p=(float(b)/float(a))*100;
    cout<<"The population of India is "<<p<<"% of the world's population"<<endl;

    return 0;
}
