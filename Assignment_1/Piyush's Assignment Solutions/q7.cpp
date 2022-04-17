#include <iostream>
using namespace std;
int main()
{
    const float milesper100 = 62.14; 
    const float gallonperlitre = 0.264172; 
    float gallons, litre, ans;
    cout << "Enter fuel litre/100km:" << endl;
    cin >> litre;
    gallons = litre * gallonperlitre;
    cout << "The fuel in gallons:" << gallons << "gallons" << endl;
    ans = milesper100/gallons;
    cout << "how many fuel is taken to  go l/100 km:" << ans << "mpg" << endl;
}