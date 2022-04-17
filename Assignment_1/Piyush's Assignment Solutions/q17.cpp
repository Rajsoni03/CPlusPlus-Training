#include<iostream>
using namespace std;

int main(){
    int arr[3];
    for(int i=0;i<3;i++){
        cout<<"Enter in min time "<<i+1<<" ";
        cin>>arr[i];
    }
    int avg=0;
    for(int i=0;i<3;i++){
        cout<<"Time: "<<i+1<<" "<<arr[i]<<endl;
        avg+=arr[i];
    }
    cout<<endl;
    avg=avg/3;
    cout<<"Average time is "<<avg<<endl;
}