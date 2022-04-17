#include<iostream>
using namespace std;

int main(){
    string firstname,lastname;
    char grade;
    int age;
    cout<<"What is your first name? ";
    getline(cin,firstname);
    cout<<"What is your last name? ";
    cin>>lastname;
    cout<<"What letter grade do you deserve? ";
    cin>>grade;
    cout<<"What is your age? ";
    cin>>age;

    cout<<"Name: "<<lastname<<" "<<firstname<<endl;
    grade+=1;
    cout<<"Grade: "<<grade<<endl;
    cout<<"Age:: "<<age<<endl;
}