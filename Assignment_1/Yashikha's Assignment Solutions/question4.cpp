#include <iostream>

using namespace std;

int main()
{
    long long s;
    cout<<"Enter the no. of seconds:-";
    cin>>s;
    int a;
    a=s/60;
    int second=s%60;
    int b;
    b=a/60;
    int minute=a%60;
    int c;
    c=b/24;
    int day=c;
    int hours=b%24;
    cout<<day<<"days , "<<hours<<"hours , "<<minute<<"minutes , "<<second<<"seconds"<<endl;

    return 0;
}
