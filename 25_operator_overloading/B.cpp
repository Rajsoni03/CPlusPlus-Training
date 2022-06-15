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

		int operator[](int index){ // operator overloading
			return arr_[index];
		}
};


int main(){
	Array myArr(10);
	cout << myArr.size() << endl;

	cout << myArr[1] << endl;
	cout << myArr.operator[](1) << endl;

	return 0;
}