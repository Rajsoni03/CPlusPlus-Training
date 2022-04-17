#include<iostream>
using namespace std;

int main(){
    const float mintometer = 0.01666667;
    const float sectometer = 0.000277778;


    int degree , min, sec; 
    float todegree;
    cout<<"Enter degree minute and seconds with spaces ";
    cin>>degree>>min>>sec;
    todegree = degree + (min*mintometer) + (sec * sectometer);

    cout<<"So the answer in degree will be "<<todegree<<endl;

}
