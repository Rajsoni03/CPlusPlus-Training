#include <iostream>
using namespace std;

struct bop{
	char fullname [20] ;  
	char title [20] ;     
	char bopname [50] ;   
	int preference;       
};

int main (){
	bop s1 = {"Wimp Macho","Junior Programmer", "MIPS\nAnalyst Trainee\nLOOPY" , 0};
	bop s2 = {"Raki Rhodes","Senior Programmer", "MIPS\nSoftware Engg.\nLOOPY", 1};
	bop s3 = {"Celia Laiter","Fresher Programmer", "MIPS\nAnalyst Trainee\nLOOPY", 2};

	cout<<"Benevolent Order of Programmers Report"<<endl;
	cout <<"a. display by name      b. display by title \nc. display by bopname   d. display by preference. \nq.quit"<<endl;
	char ans ;
	cout <<"Enter Your Choice: ";
	cin>>ans;
	while(ans!='a' && ans!='b' && ans!='c' && ans!='d'  && ans!='q'){
		cout << "Please enter corret option (a,b,c,d): ";
		cin>> ans;
	}
	while (ans !='q'){
		if (ans =='a'){
			cout <<s1.fullname<<"\n"<<s2.fullname<<"\n"<<s3.fullname<<"\n"<<endl;
		}else if (ans =='b'){
			cout <<s1.title<<"\n"<<s2.title<<"\n"<<s3.title<<"\n"<<endl;
		}else if (ans =='c'){
			cout <<s1.bopname<<"\n"<<s2.bopname<<"\n"<<s3.bopname<<"\n"<<endl;
		}else if (ans =='d'){
			if (s1.preference==0){
				cout <<s1.fullname<<"\n"<<s1.title<<"\n"<<s1.bopname<<"\n"<<endl;
			}else if (s2.preference==1){
				cout <<s2.fullname<<"\n"<<s2.title<<"\n"<<s2.bopname<<"\n"<<endl;
			}else if (s3.preference==2){
				cout <<s3.fullname<<"\n"<<s3.title<<"\n"<<s3.bopname<<"\n"<<endl;
			}
		}
		cout <<"Enter Next Choice: ";
		cin>>ans;
		while(ans!='a' && ans!='b' && ans!='c' && ans!='d' && ans!='q'){
			cout << "Please enter corret option (a,b,c,d): ";
			cin>> ans;
		}

	}
	cout <<"Thank You!";
	return 0;
}