#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char fname[20];
    char lname[20];
    char grade;
    int age;

    cout<<"What is your first name? ";
    cin.getline(fname,20);
    cout<<"What is your last name? ";
    cin.getline(lname,20);
    cout<<"What letter grade do you deserve? ";
    cin>>grade;
    cout<<"What is your age? ";
    cin>>age;
    strcat(lname,", ");
    strcat(lname,fname);
    int i=grade;
    int j;
    if(i>=97&&i<=122){
        i=grade-32;
    }
    i++;
    cout<<"Name: "<<lname<<endl;
    cout<<"Grade: "<<(char)i<<endl;
    cout<<"Age: "<<age<<endl;

    return 0;
}
