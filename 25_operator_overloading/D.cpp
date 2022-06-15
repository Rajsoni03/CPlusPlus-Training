#include <iostream>
using namespace std;

class Array{
	private:
		int *arr_;
		int size_;
	public:
		Array(){
			size_ = 0;
			arr_ = new int[size_];
		}

		Array(int size_, int val = 0){
			this->size_ = size_;
			arr_ = new int[size_];

			for (int i = 0; i < size_; i++){
				arr_[i] = val;
			}
		}

		int size(){
			return size_;
		}

		int& operator[](int index){ // operator overloading
			return arr_[index];
		}

		Array operator+(Array arr2){
			Array ansArray(this->size() + arr2.size());
			for (int i = 0; i < this->size(); i++){
				ansArray[i] = this->arr_[i];
			}
			for (int i = 0; i < arr2.size(); i++){
				ansArray[i + this->size()] = arr2[i];
			}
			return ansArray;
		}
};


int main(){
	Array myArr1(2);
	Array myArr2(3);
	Array myArr3(4);

	myArr1[0] = 2;
	myArr1[1] = 4;

	myArr2[0] = 6;
	myArr2[1] = 8;
	myArr2[2] = 10;

	myArr3[0] = 12;
	myArr3[1] = 14;
	myArr3[2] = 16;
	myArr3[3] = 18;


	Array myBigArray = myArr1 + myArr2 + myArr3;
	// Array myBigArray = myArr1.operator+(myArr2 + myArr3);
	// Array myBigArray = myArr1.operator+(myArr2.operator+(myArr3));

	for (int i = 0; i < myBigArray.size(); i++){
		cout << myBigArray[i] << endl;
	}

	return 0;
}