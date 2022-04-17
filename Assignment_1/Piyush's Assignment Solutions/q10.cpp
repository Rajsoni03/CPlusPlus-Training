#include<iostream>
// #include<string>
#include<cstring>
using namespace std;

int main(){
    const int size = 30;

    char firstname[size],lastname[size];
    cout<<"Enter your firstname ";
    cin.getline(firstname,size);
    cout<<"Enter your lastname ";
    cin.getline(lastname,size);
    // getline(cin,lastname);
    // getline(cin,lastname);

    char str[80];
    strcpy (str,lastname);
    strcat(str,", ");
    strcat(str,firstname);
    cout<<"Here's the information in a single string: "<<str<<endl;

}