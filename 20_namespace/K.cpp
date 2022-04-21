#include <iostream>
using namespace std;

namespace sphere{
	float PI = 3.14;
	float volume(int r){
		return PI * r * r * r * (4/3);
	}
}

namespace chintu = sphere;

namespace sphere{
	float AreaOfCube(int a){
		return 6 * a * a;
	}
}

int main(){
	cout << chintu::volume(10) << endl;
	cout << sphere::volume(10) << endl;
	
	cout << chintu::AreaOfCube(10) << endl;
	cout << sphere::AreaOfCube(10) << endl;

	return 0;
}