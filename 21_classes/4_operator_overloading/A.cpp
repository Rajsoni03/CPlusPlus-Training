#include <iostream>
using namespace std;

class Array{
	public:
		int * arr;
		int size;

		Array(){
			size = 0;
			arr = new int[size];
		}

		Array(int size, int val = 0){
			this->size = size;
			arr = new int[size];

			for (int i = 0; i < size; i++){
				arr[i] = val;
			}
		}
};

void print(Array myArr){
	for (int i = 0; i < myArr.size; i++){
		cout << myArr.arr[i] << endl;
	}
}


int main(){
	Array myArr(10);
	// myArr.size = 2;

	for (int i = 0; i < myArr.size; i++){
		myArr.arr[i] = i;
	}

	print(myArr);

	cout << myArr.arr[3] << endl;

	// int a = 10;
	// myArr.arr = &a;

	return 0;
}