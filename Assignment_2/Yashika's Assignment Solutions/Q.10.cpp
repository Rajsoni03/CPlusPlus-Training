#include <iostream>

using namespace std;
void asterik(int a){

    for(int i=1;i<=a;i++){
            for(int k=a;k>i;k--){
                cout<<".";
            }
            for(int j=0;j<i;j++){

        cout<<"*";
}
cout<<endl;
    }

}
int main()
{
     int b;
     cout<<"Enter number of rows : ";
    cin>>b;
    asterik(b);

    return 0;
}
