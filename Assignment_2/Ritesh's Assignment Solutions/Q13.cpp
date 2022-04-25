#include <iostream>
#include <string>
using namespace std;

int main(){
	char a ;
	cout<< "Please enter one of the following choices: "<<endl;
	cout <<"c) carnivore \tp) pianist\nt) tree \tg) game\n"<<endl;
	cout << "Please enter a c, P, t, or g: ";
	cin>> a;
	while(a!='c' && a!='P' && a!='t' && a!='g'){
		cout << "Please enter a c, P, t, or g: ";
		cin>> a;
	}
	string ans;
	if (a=='c'){
		ans = "carnivore";
	}else if (a=='P'){
		ans = "pianist";
	}else if (a=='t'){
		ans = "tree";
	}else if (a=='g'){
		ans = "game";
	}
	cout <<"A apple is a "<< ans<<"."<<endl;
	return 0;
}
