#include<iostream>
using namespace std;

const int inchesinfeet = 12;
const float inmeters = 0.0254;
const int inkg = 2.2;

int main(){
    float BMI;
    float height;
    float feet,inches,heightinches,heightinmet;
    cout<<"Enter your height in feet and inches "<<endl;
    cin>>feet;
    cin>>inches;
    // converting feet and inches to inches only
    heightinches = (feet*12)+inches;
    cout<<"height in inches is "<<heightinches<<endl;

    // converting inches to meters
    heightinmet = heightinches * inmeters;
    cout<<"height in meters is "<<heightinmet<<endl;

    int weight,weightinkg;
    cout<<"Enter your weight in pounds ";
    cin>>weight;

    // Converting weight in kg
    weightinkg = weight/inkg;
    cout<<"Enter your weight in kg is "<<weightinkg;

    BMI = weightinkg/(heightinmet*heightinmet);

    cout<<"So the BMI of your Body is "<<BMI<<endl;;
}