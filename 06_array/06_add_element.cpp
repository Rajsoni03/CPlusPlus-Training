/* 
###################[ Task 1 ]###################
################################################

* Create integer array "arr" with size 2 and initlize with zero 
    arr = [0,0]
* Create pointer "ptr" and initlize with address of arr
    ptr ----> arr
* Create a function "add()" that add element to array in place of zero (empty space) (left to right)
  print "Array Full" if 
    ex. 
        arr ----> [0, 0]
        
        add(2)
        arr ----> [2, 0]

        add(8)
        arr ----> [2, 8]

        add(4)        
        "Array Full"
*/
#include <iostream>
using namespace std;

int arr[5]{};
int count = 0;

void add(int ele){
    // Start Code here
    if (count == 5) cout << "Array is Full" << endl;
    else{
        arr[count] = ele;
        count++;
    }
    // end code
    for (int i = 0; i < 5; i++){
        cout << arr[i] << ", ";
    }
    cout << endl;
}

int main(){
    add(2); // 2, 0
    add(8); // 2, 8
    add(0); // 
    add(1); // 
    add(7); // 
    add(9); // Array is Full
    return 0;
}