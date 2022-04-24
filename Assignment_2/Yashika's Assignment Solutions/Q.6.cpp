#include <iostream>

using namespace std;
void sales(int a,int arr1[][12]){
    int i=0;
    char *month[]={"January","February","March","April","May","June","July","August","September","October","November","December"};

    for(int j=0;j<3;j++){
            cout<<"Enter the sales of year "<<j+1<<" : "<<endl;
    for(i=0;i<12;i++){
        cout<<"Enter the worth (no. of books sold)in "<<month[i]<<endl;
        cin>>a;
        arr1[j][i]=a;
    }
    cout<<endl;

    }

}
int main()
{
    int worth;
    int i=0;
    int sum=0;
    int total=0;
    int arrw[3][12];
    sales(worth,arrw);
    for(int j=0;j<3;j++)
{
    for(int i=0;i<12;i++){
    total+=arrw[j][i];
     }
     cout<<"The total sales of the year "<< j+1<<" is: "<<total<<endl;
     sum+=total;
     total=0;

    }
    cout<<"The total sales of 3 years is : "<<sum<<endl;
    cout << "Hello world!" << endl;
    return 0;
}
