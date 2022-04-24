#include <iostream>

using namespace std;

int main()
{
    int income;
    int tax;
  cout<<"Enter your income: ";
  cin>>income;
  if(income>0){
     if (income < 5000)
                tax = 0;
            else if (income > 5000 && income <= 15000)
                tax = (income - 5000) * .10;
            else if (income > 15000 && income <= 35000)
                tax = ((income - 15000) * .15) + (10000 * .10);
            else if (income > 35000)
                tax = ((income - 35000) * .20) + (20000 * .15) + (10000 * .10);
            cout << "Taxes Owed = " << tax <<" tvarps " <<endl;
        }
        else{
            cout<<"You have entered incorrect value.Please enter the positive integer value."<<endl;
        }

    return 0;
}
