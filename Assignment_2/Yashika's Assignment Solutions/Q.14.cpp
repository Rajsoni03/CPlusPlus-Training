#include <iostream>

using namespace std;
struct bop{
    char fullname[30];
    char title[20];
    char bopname [20];
    int preference;
};
void menu(){
 cout<<"Benevolent order of Programmers Report "<<endl;
 cout<<"a) display by name "<<"                                 "<<"b) display by title"<<endl;
 cout<<"c) display by bop name "<<"                             "<<"d) display by preference"<<endl;
 cout<<"q) quit"<<endl;
 cout<<"Enter your Choice: ";
}
void select(char a , bop p1,bop q1,bop r1,bop s1){

 switch(a) {
  //case 'A':
  case 'a':
     cout<<p1.fullname<<endl;
     cout<<q1.fullname<<endl;
     cout<<r1.fullname<<endl;
     cout<<s1.fullname<<endl;
     cout<<"Next Choice: ";
     cin>>a;
     select(a,p1,q1,r1,s1);
     break;
  //case 'B':
  case 'b':
     cout<<p1.title<<endl;
     cout<<q1.title<<endl;
     cout<<r1.title<<endl;
     cout<<s1.title<<endl;
     cout<<"Next Choice: ";
     cin>>a;
     select(a,p1,q1,r1,s1);
     break;

  //case 'C':
  case 'c':
     cout<<p1.bopname<<endl;
     cout<<q1.bopname<<endl;
     cout<<r1.bopname<<endl;
     cout<<s1.bopname<<endl;
     cout<<"Next Choice: ";
     cin>>a;
     select(a,p1,q1,r1,s1);
     break;
  //case 'D':
  case 'd':
     cout<<p1.fullname<<endl;
     cout<<q1.title<<endl;
     cout<<r1.bopname<<endl;
     cout<<s1.bopname<<endl;
     cout<<"Next Choice: ";
     cin>>a;
     select(a,p1,q1,r1,s1);
     break;
   //case 'Q':
   case 'q':
    cout<<"Bye!"<<endl;
    exit(0);

  default:
    cout<<"Next Choice: ";
    cin>>a;
    select(a,p1,q1,r1,s1);
    break;
}
}
int main()
{
    menu();
    char b;
    cin>>b;
    bop p={"Yashika Khanna ","Master1","Yashika ",0};
    bop q={"Darshika Khanna ","Master2","Darshika",1};
    bop r={"Mohan Bedi","Employee","Mohan ",2};
    bop s={"Sohan Bedi","Employee","Sohan ",2};
    select(b,p,q,r,s);

    cout << "Hello world!" << endl;
    return 0;
}
