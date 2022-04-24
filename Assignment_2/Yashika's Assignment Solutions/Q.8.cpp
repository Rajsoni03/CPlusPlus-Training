#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    const char ch[] = "done";
    char text[100] = "";

    cout << "Enter words (to stop, type the word done):"<<endl;

    int count = 0;

    while (strcmp(text, ch) != 0) {
        cin >> text;
        count++;
    }

    cout << "You entered a total of " << count - 1 << " words"<<endl;

    return 0;
}
