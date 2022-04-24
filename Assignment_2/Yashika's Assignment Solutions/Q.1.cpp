#include <iostream>

using namespace std;
int addition (int a, int b){
    int i;
    int j;
    int sum=0;
    int add=0;
if(a>b){
         i=b;
         while (i<=a){
         sum+=i;//2;5
         i++;
         //cout<<sum<<endl;
      }
      cout<<"Sum of all integers from " <<b<< " to "<<a<<" is: ";
      return sum;
    }
    else
    {
        j=a;
        while (j<=b){
        add+=j;
        j++;
        //cout<< add<<endl;
      }
      cout<<"Sum of all integers from " <<a<< " to "<<b<<" is: ";
      return add;
}
}
int main()
{
    int a;
    int b;

    cout<<"Enter two integers to calculate sum between the two integers including them,"<<endl;
    cout<<"Enter first integer:";
    cin>>a;
    cout<<"Enter second integer:";
    cin>>b;
    cout<<addition(a,b)<<endl;

    return 0;
}
