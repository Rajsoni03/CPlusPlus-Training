#include <iostream>
#include <string>
using namespace std;

class Mobile{ 
	private:
		string GSM;
		string ProductDesigner;
	public: 
		string model_name;
		int battery_MAH;
		int no_of_camera;
		int camera_MP;
		int no_of_dandi;

		void display(){
			cout << model_name << endl;
			cout << battery_MAH << endl;
			cout << no_of_camera << endl;
			cout << camera_MP << endl;
			cout << no_of_dandi << endl;
		}
};


int main(){
	Mobile samsung;

	samsung.model_name = "S22 Ultra";
	samsung.battery_MAH = 6000;
	samsung.no_of_camera = 5;
	samsung.camera_MP = 108;
	samsung.no_of_dandi = 5;
	// samsung.GSM = "GSM 2800";

	Mobile iphone;

	iphone.model_name = "13 pro max";
	iphone.battery_MAH = 4000;
	iphone.no_of_camera = 3;
	iphone.camera_MP = 12;
	iphone.no_of_dandi = 4;


	samsung.display();
	iphone.display();

	return 0;
}