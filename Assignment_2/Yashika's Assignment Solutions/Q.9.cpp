#include <iostream>
#include <string>
using namespace std;

int main()
{
    const string ch= "done";
    string text= "";

    cout << "Enter words (to stop, type the word done):"<<endl;

    int count = 0;

    while (strcmp(text, ch) != 0) {
        cin >> text;
        count++;
    }

    cout << "You entered a total of " << count - 1 << " words"<<endl;

    return 0;
}
