#include <iostream>

using namespace std;

int main()
{
    float km;
    float lt;
    cout<<"Enter distance in km:-";
    cin>>km;
    cout<<"Enter petrol in litres:-";
    cin>>lt;
    float avg;
    avg=lt/km;
    cout<<avg*100<<" litres per 100 km"<<endl;




    return 0;
}
