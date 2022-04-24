#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    char ch;
    cout << "Enter your characters : ";

while ((ch=cin.get())!='@')
{ if (islower(ch)){
 cout<<(char)toupper(ch);
}
else {
        if (isupper(ch)){
    cout<<(char)tolower(ch);
        }
}
if ( isspace(ch) || ispunct(ch)){
cout <<ch;
}
}
    return 0;
}
