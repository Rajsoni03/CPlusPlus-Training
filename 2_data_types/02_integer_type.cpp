#include <iostream>
#include <climits> // #include <limits.h>

using namespace std;

int main(){
	cout << "size of short : " << sizeof(short) << endl;
	cout << "size of int : " << sizeof(int) << endl;
	cout << "size of long : " << sizeof(long) << endl;
	cout << "size of long long : " << sizeof(long long) << endl;

	cout << "Max Limit of short : " << SHRT_MAX << endl;
	cout << "Min Limit of short : " << SHRT_MIN << endl;
	cout << "Max Limit of int : " << INT_MAX << endl;
	cout << "Min Limit of int : " << INT_MIN << endl;
	cout << "Max Limit of long : " << LONG_MAX << endl;
	cout << "Min Limit of long : " << LONG_MIN << endl;
	cout << "Max Limit of long long : " << LLONG_MAX << endl;
	cout << "Min Limit of long long : " << LLONG_MIN << endl;
	return 0;
}
