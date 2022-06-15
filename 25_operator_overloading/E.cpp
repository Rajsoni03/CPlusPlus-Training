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
		
		Array operator*(int t){
			int n = this->size();
			Array ansArray(n * t);
			for (int i = 0; i < t; i++){ // 0
				for (int j = 0; j < n; j++){
					ansArray[j+i*n] = this->arr_[j];
				}
			}
			return ansArray;
		}
};


int main(){
	Array myArr1(4);

	myArr1[0] = 1;
	myArr1[1] = 2;
	myArr1[2] = 3;
	myArr1[3] = 4;


	Array myBigArray = myArr1 * 2;

	for (int i = 0; i < myBigArray.size(); i++){
		cout << myBigArray[i] << endl;
	}

	return 0;
}