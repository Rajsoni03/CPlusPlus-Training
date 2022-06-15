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

		Array operator+(Array arr2){ // concatinate
			Array ansArray(this->size() + arr2.size());
			for (int i = 0; i < this->size(); i++){
				ansArray[i] = this->arr_[i];
			}
			// for (int i = this->size(); i < this->size() + arr2.size(); i++){
			// 	ansArray[i] = arr2[i - this->size()];
			// }
			for (int i = 0; i < arr2.size(); i++){
				ansArray[i + this->size()] = arr2[i];
			}
			return ansArray;
		}
};


int main(){
	Array myArr1(2);
	Array myArr2(2);

	myArr1[0] = 2;
	myArr1[1] = 4;

	myArr2[0] = 6;
	myArr2[1] = 8;


	Array myArr3 = myArr1 + myArr2;
	// Array myArr3 = myArr1.operator+(myArr2);

	for (int i = 0; i < myArr3.size(); i++){
		cout << myArr3[i] << endl;
	}


	return 0;
}