#include <iostream>
using namespace std;

inline void print(int n){
	int sum  = 0;
	for (int i = 0; i < n; i++){
		sum += i;
	}
	cout << sum << endl;
}

int main(){
	// print(10);
	{
		int sum  = 0;
		for (int i = 0; i < 10; i++){
			sum += i;
		}
		cout << sum << endl;
	}

	return 0;
}