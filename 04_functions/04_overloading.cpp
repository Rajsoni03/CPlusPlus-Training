#include <iostream>
using namespace std;

int printSqure(int a){
	cout << "Int : " << a*a << endl;
	return a*a;
}
// float printSqure(float b){
// 	cout << "Float : " << b*b << endl;
// 	return b*b;
// }
// short printSqure(short c){
// 	cout << "Short : " << c*c << endl;
// 	return c*c;
// }
// long long printSqure(long long d){
// 	cout << "long long : " << d*d << endl;
// 	return (d*d >= 100) ? d*d : -1;
// }
// double printSqure(double d){
// 	cout << "double : " << d*d << endl;
// 	return d*d;
// }
int main(){
	int a = 5;
	float b = 2.5;
	short c = 3;
	// cout << printSqure(a) << endl; 
	// cout << printSqure(b) << endl; 
	// cout << printSqure(c) << endl; 

	//float a = 3424;
	// cout << printSqure(34.24) << endl; 
	// cout << printSqure(44E10) << endl; 
	cout << printSqure(440000000000) << endl; 
	return 0;
}
