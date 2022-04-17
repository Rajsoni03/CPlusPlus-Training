#include<iostream>
using namespace std;

struct CandyBar{
    string brand;
    int weight;
    int calories;
};
int main(){
    CandyBar snack1;
    CandyBar snack2;
    CandyBar snack3;
    CandyBar arr[] = {snack1,snack2,snack3};
    for(int i=0;i<3;i++){
        // CandyBar arr[i];
        cout<<"Enter the name of the snack"<<i+1<<" ";
        cin>>arr[i].brand;
        cout<<"Enter the weight of the snack"<<i+1<<" ";
        cin>>arr[i].weight;
        cout<<"Enter the calories of the snack"<<i+1<<" ";
        cin>>arr[i].calories;
        }
    for(int i=0;i<3;i++){
        
        cout<<"Brand: "<<arr[i].brand<<endl;
        cout<<"Weight: "<<arr[i].weight<<endl;
        cout<<"Calories"<<" "<<arr[i].calories<<endl;
        cout<<"****************************"<<endl<<endl;
        }
}