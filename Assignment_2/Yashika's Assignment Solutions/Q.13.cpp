#include <iostream>

using namespace std;

void menu(){
 cout<<"Please enter one of the following choices: "<<endl;
 cout<<"c) carnivore"<<"                        "<<"p) pianist"<<endl;
 cout<<"t) tree"<<"                             "<<"g) game"<<endl;
}

void select(char a){
 switch(a) {
  //case 'C':
  case 'c':
     cout<<"A maple is a carnivore ."<<endl;
     break;

  //case 'P':
  case 'p':
     cout<<"A maple is a pianist ."<<endl;
     break;
  //case 'T':
  case 't':
     cout<<"A maple is a tree ."<<endl;
     break;
  //case 'G':
  case 'g':
     cout<<"A maple is a game ."<<endl;
     break;

  default:
    cout<<"Please enter a valid choice , c, p, t or g: ";
    cin>>a;
    select(a);
    break;
 }

}
int main()
{
    char ch;
    menu();
    cin>>ch;
    select(ch);
    return 0;
}
