#include <iostream>

using namespace std;

int main()
{
    const int arraysize=101;
    long double factorial[arraysize];
    factorial[0]=1;
    factorial[1]=1;

    for(int i=2;i<arraysize;i++){
        factorial[i]=i*factorial[i-1];
    }
    for(int i=0;i<arraysize;i++){
        cout<<i<<"! = "<<factorial[i]<<endl;
    }

    return 0;
}
