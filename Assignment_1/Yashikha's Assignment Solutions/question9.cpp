#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    string name;
    string desert;
    cout<<"Enter your name: ";
    getline(cin,name);
    cout<<"Enter your favourite desert: ";
    getline(cin,desert);
    cout<<"I have some delicious "<<desert;
    cout<<" for you, "<<name<< endl;

  return 0;
}
