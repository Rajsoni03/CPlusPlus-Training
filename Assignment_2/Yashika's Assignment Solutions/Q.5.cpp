#include <iostream>
#include <cstring>

using namespace std;
int sales(int a,int arr1[]){
    int i=0;
    char *month[]={"January","February","March","April","May","June","July","August","September","October","November","December"};

    for(i=0;i<12;i++){
        cout<<"Enter the worth (no. of books sold)in "<<month[i]<<endl;
        cin>>a;
        arr1[i]=a;
    }
}

int main(){
    int worth;
    int total=0;
    int arrw[12];
    sales(worth,arrw);
    for(int i=0;i<12;i++){
        total+=arrw[i];
    }
    cout<<"The total sales of the year is: "<<total<<endl;

    return 0;
}