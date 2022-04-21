#include <iostream>
using namespace std;

namespace mySpace{	
	float PI = 3.14;
	float AreaOfCircle(int r){ 
		return PI * r * r; 
	}
}

namespace myNewSpace{
	float AreaOfSphere(int r){
		return 4 * mySpace::PI * r * r; 
	}
}

using namespace mySpace;
using namespace myNewSpace;

int main(){

	cout << PI << endl;
	cout << AreaOfCircle(11) << endl;
	cout << AreaOfSphere(11) << endl;

	return 0;
}