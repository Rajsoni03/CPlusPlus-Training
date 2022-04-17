#include <iostream>

using namespace std;

int main()
{
    float a;
    cout<<"Enter automobile gasoline consumption in litres per 100 km:";
    cin>>a;
    float b;
    b=a/3.875;
    float c;
    c=62.14/b;
    cout<<"Gasoline consumption in miles per gallon is :"<<c<<"mpg"<<endl;
    return 0;
}
