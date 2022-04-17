#include<iostream>
using namespace std;

int main(){
    string firstname,lastname;
    cout<<"Enter.your first name: ";
    getline(cin,firstname);
    cout<<"Enter.your lastname name: ";
    getline(cin,lastname);
    cout<<"Here's the information in a single string: "<<lastname+", "+firstname<<endl;
}