#include <iostream>
using namespace std;

struct S{
	int a;
};

template <typename T1, typename T2> 
int sum(T1 a, T2 b){
	return a + b;
}

S sum(S s1, S s2){
	S ans;
	ans.a = {s1.a + s2.a};
	return ans;
}

int main(){
	cout << sum<int, int>(10.20, 20.20) << endl;

	S s1 = {10};
	S s2 = {20};

	S s3 = sum(s1, s2);
	cout << s3.a << endl;
	// cout << sum<S, S>(s1, s2).a << endl;

	return 0;
}