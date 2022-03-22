#include <iostream>
using namespace std;

int main(){
    // int a = 10;
    // const int *p = &a;
    // int const *p = &a; 

    // p++; // valid
    // (*p)++;

    int a = 10;    
    int* const p = &a;

    p++; 
    (*p)++; // valid 


    return 0;
}