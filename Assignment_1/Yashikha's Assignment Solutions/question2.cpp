#include <iostream>

using namespace std;

int main()
{
    int feet;
    int inches;
    int pound;
    cout<<"Enter your height in feet and inches"<<endl;
    cout << "First enter feet" ;
    cin>>feet;
    cout << "Enter inches" ;
    cin>>inches;
    cout << "Enter your weight in pounds:-";
    cin>>pound;

    const int conv=12;
    int heightinch=(feet*conv)+inches;
    float heightmtr=heightinch*0.0254;
    float weight=pound/2.2;
    float bmi=weight/(heightmtr*heightmtr);
    cout<<"Your BMI is:-"<<bmi<<endl;

    return 0;
}
