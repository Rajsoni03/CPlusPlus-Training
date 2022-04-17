#include <iostream>
using namespace std;

int squre(int);
float add(int, float);

int main(){
	int ans = squre(20);
	float result = add(10, 5.5);
	cout << ans << endl;
	cout << result << endl;
	return 0;
}

int squre(int x){
	return x*x;
}
float add(int i, float f){
	return i + f;
}