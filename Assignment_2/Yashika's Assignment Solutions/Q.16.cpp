#include <iostream>
#include <string>
using namespace std;
struct cont{
    string name;
    double b;
};
int main()
{
    int a;
    cout<<"Enter the number of contributors : ";
    cin>>a;
    cont arr[a][2];
    for(int i=0;i<a;i++){
        cout<<"Enter the name of contributor "<<i+1<<" : ";
        cin.ignore(1,'\n');
        getline(cin,arr[i][1].name);
        cout<<"Enter the amount of contribution "<<i+1<<" : ";
        cin>>arr[i][2].b;

    }

        cout<<"Grand Patrons : "<<endl;
     for(int i=0;i<a;i++){

        if(arr[i][2].b>=10000){
            cout<<arr[i][1].name<<endl;
            cout<<arr[i][2].b<<endl;
        }
     }
        cout<<"Patrons"<<endl;
         for(int i=0;i<a;i++){

        if(!(arr[i][2].b>=10000)){
            cout<<arr[i][1].name<<endl;
            cout<<arr[i][2].b<<endl;
        }
         }

    return 0;
}
