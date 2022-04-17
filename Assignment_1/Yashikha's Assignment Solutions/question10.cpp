#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char arr[20];
    cout<<"Enter your first name:";
    cin>>arr;
    char arr1[20];
    cout<<"Enter your last name:";
    cin>>arr1;
    //string concat= arr1+ " , " +arr;
    strcat(arr1,", ");
    strcat(arr1,arr);

    // cout<<arr1<<" , "<<arr;
    cout<<arr1;

    return 0;
}
