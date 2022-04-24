#include <iostream>

using namespace std;

int main()
{
    int a;
    int sum=0;
    cout<<"Enter the input in numbers , enter zero to stop."<<endl;
    cout<<"Enter the number: ";
    cin>>a;
    while(a!=0){
        sum+=a;
        cout<<"The commulative sum of your entries is : "<<sum<<endl;
        cout<<"Enter the next number : ";
        cin>>a;

    }

    return 0;
}
