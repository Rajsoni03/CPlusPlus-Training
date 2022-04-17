#include<iostream>
using namespace std;

int main(){
    string name;
    string desert;
    cout<<"Enter your name ";
    getline(cin,name);
    cout<<"Enter your favourate desert ";
    getline(cin,desert);

    cout<<"I have some delecious desert "<<desert<< " for you "<<name<<endl;
}