/* 
C style Comments
or Multiline Comments
*/

// C++ Comments
// Single line comments

#include <iostream>
using namespace std;

int main(){	
	cout  /* THIS IS COUT */ << /* THIS IS << */ "hello World!";	// this is cout

	cout   </* THIS IS << */<  "hello World!";	

	co/* THIS IS << */ut   <<  "hello World!";	

	cout   <<  "hello /* THIS IS << */ World!";
	return 0;
}
