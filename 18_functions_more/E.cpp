#include <iostream>
using namespace std;

int sum(int n){
	int ans = 0;
	for (int i = 0; i <= n; i++){
		ans += i;
	}
	return ans;
}

int sumRec(int n){
	if (n <= 0){
		return 0;
	}
	return n + sumRec(n-1);
}

int fact(int n){
	if (n <= 2){
		return n;
	}
	return n * fact(n-1);
}

int main(){	
	// cout << sum(100) << endl;
	// cout << sumRec(1000);
	cout << fact(-4);
	// -4 * -3 * -2 * -1 = 
	return 0;
}