#include <iostream>

using namespace std;

int main()
{
    int count;
    int a=100;
    int interestd=0.10;
    int b=100;
    int inerestc=0.05;
    while(a>=b){
             for(count=0;a>=b;count++){
                a=(0.10*100)+a;
                b=(0.05*b)+b;
        }

        cout<<"The time it took for the Cleo's investment to exceed Daphne investment is "<<count<<" Years"<<endl;
        cout<<"After "<<count<<" years,"<<endl;
        cout<<"Investment of Daphne: $"<<a<<" and "<<"Investment of Cleo: $"<<b<<endl;
    //return a,b;
}

    return 0;
}
