#include <iostream>
#include <string>
using namespace std;
struct car{
    string make;
    int year;
};
int main()
{
    int catalog;
    cout<<"How many cars to catalog : ";
    cin>>catalog;
    car* arr=new car[catalog];
    for(int i=0;i<catalog;i++){
        cout<<"Car #"<<i+1<<endl;
        cout<<"Please enter the make : ";
        cin.ignore(1, '\n');
        getline(cin, arr[i].make);
        cout<<"Please enter the year made : ";
        cin>>arr[i].year;
    }
    cout<<"Here is your collection : "<<endl;
    for(int i=0;i<catalog;i++){
        cout<<arr[i].year<<"  "<<arr[i].make<<endl;;

    }
    return 0;
}
