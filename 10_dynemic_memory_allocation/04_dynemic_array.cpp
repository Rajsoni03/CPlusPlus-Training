/* 
###################[ Task 2 ]###################
################################################

* Create integer array "arr" with size 2 and initlize with zero 
    arr = [0,0]
* Create pointer "ptr" and initlize with address of arr
    ptr ----> arr
* Create a function "add_dynemic()" that add element to array in place of zero (left to right)
    - implement the funtionlity to create new array if the existing array get full 
    - size of new array is (size of old array + 2)
    - replace the address of "ptr" to new array
    ex.
        arr ----> [2, 0]
        
        add_dynemic(5)
        arr ----> [2, 5]

        add_dynemic(8)
        arr ----> [2, 5, 8, 0]
        
        add_dynemic(1)
        arr ----> [2, 5, 8, 1]

        add_dynemic(4)
        arr ----> [2, 5, 8, 1, 4, 0]
*/

#include <iostream>
using namespace std;

int size = 2;
int count = 0;
int *arr = new int[size];

void add_dynemic(int ele){
    // Start Code Here
    
    
    // End Code Here
    for (int i = 0; i < size; i++){
        cout << arr[i] << "  ";
    }
    cout << endl;
}



int main(){
    add_dynemic(2); // 2, 0
    add_dynemic(5); // 2, 5
    add_dynemic(8); // 2, 5, 8, 0
    add_dynemic(1); // 2, 5, 8, 1
    add_dynemic(4); // 2, 5, 8, 1, 4, 0
    add_dynemic(3); // 2, 5, 8, 1, 4, 3
    return 0;
}