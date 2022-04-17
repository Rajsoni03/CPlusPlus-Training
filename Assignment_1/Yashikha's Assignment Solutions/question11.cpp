#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string s1;
    cout<<"Enter your first name:";
    cin>>s1;
    string s2;
    cout<<"Enter your last name:";
    cin>>s2;
    s2+=", ";
    string s3=s2+s1;

    cout << s3 << endl;
    return 0;
}
