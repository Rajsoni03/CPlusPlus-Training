#include <iostream>
using namespace std;

int main(){
	wchar_t a = L'\u0958';
	cout << sizeof(a) << endl;

	wcout << L'\u0930';
	cout << "my name is \u0930\u093E\u091C" ;

	return 0;
}