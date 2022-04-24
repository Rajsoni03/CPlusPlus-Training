#include <iostream>
#include <string>
#include <cstring>
#include<ctype.h>
using namespace std;

int main()
{
    const char ch[] = "q";
    char text[100]= "";

    cout << "Enter words (to stop, type the word q):"<<endl;

    int count = 0;
    int consonant=0;
    int vowel=0;
    int other=0;

    while (strcmp(text, ch) != 0) {
        cin >> text;
        cout<<"Your string is : "<<text<<endl;
        count+=1;
    }
    for(int i=0;i<count;i++){
    if(text[i]!='/0'){
       if(isalpha(text[i])!=0){
        if((text[i]='a')||(text[i]='e')||(text[i]='i')||(text[i]='o')||(text[i]='u')){
            vowel+=1;
        }
        else{
            consonant+=1;
        }

       }
       else{
        other+=1;
       }
    }
    }
    cout<<vowel<<endl;
    cout<<consonant<<endl;
    cout<<other<<endl;


    cout << "Hello world!" << endl;
    return 0;
}
