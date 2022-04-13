#include <iostream>
using namespace std;

int SIZE = 2;
int count = 0;
int *arr = new int[SIZE]{};

void add_dynemic(int ele){
    // Start Code Here
    if (count == SIZE){
        SIZE += 2;
        int *newArr = new int[SIZE]{};

        // copy elements
        for (int i = 0; i < count; i++){
            newArr[i] = arr[i];
        }

        // delete old array 
        delete[] arr;
        arr = newArr;
    }

    arr[count] = ele;
    count++;
    
    // End Code Here
    for (int i = 0; i < SIZE; i++){
        cout << arr[i] << "  ";
    }
    cout << endl;
}

void remove_element(){
    // Start Code Here
    if (SIZE==0){
        cout << "Array is Empty" << endl;
        return;
    }

    if (count == SIZE){
        arr[count-1] = 0;
        count--;
    }
    else {
        SIZE = SIZE-2;
        // create new array of size - 2
        int *tempArr = new int[SIZE]{};

        // copy elements from old arr to tempArr
        for (int i = 0; i < SIZE; i++){
            tempArr[i] = arr[i];
        }

        // delete old array and point to new array
        delete[] arr;
        arr = tempArr;
        count--;
    }

    // End Code Here
    for (int i = 0; i < SIZE; i++){
        cout << arr[i] << "  ";
    }
    cout << endl;
}

int main(){
    add_dynemic(2);   // 2, 0
    add_dynemic(5);   // 2, 5
    add_dynemic(8);   // 2, 5, 8, 0
    add_dynemic(1);   // 2, 5, 8, 1
    add_dynemic(4);   // 2, 5, 8, 1, 4, 0
    add_dynemic(3);   // 2, 5, 8, 1, 4, 3
    add_dynemic(9);   // 2, 5, 8, 1, 4, 3, 9, 0
    add_dynemic(6);   // 2, 5, 8, 1, 4, 3, 9, 6
    remove_element(); // 2, 5, 8, 1, 4, 3, 9, 0
    remove_element(); // 2, 5, 8, 1, 4, 3
    remove_element(); // 2, 5, 8, 1, 4, 0
    remove_element(); // 2, 5, 8, 1
    remove_element(); // 2, 5, 8, 0
    remove_element(); // 2, 5
    remove_element(); // 2, 0
    remove_element(); // 
    remove_element(); // No elements 

    return 0;
}