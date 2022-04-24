#include <iostream>

using namespace std;

int main()
{
    double donations[10];
    double totaldonations=0;
    int a;
    int count =0;

 cout<<"Donation 1: ";
 while (count < 10 && cin >> donations[count]) {
        if (++count < 10) {
            cout << "Donation " << count+1 << ": ";
        }
    }
        for (int i = 0; i < count; i++) {
            totaldonations += donations[i];
        }

        double average = totaldonations / count;

    cout << "Average Donation: " << average << endl;

    int largerThanAverage = 0;

    for (int j = 0; j < count; j++) {
        if (donations[j] > average) {
            largerThanAverage++;
        }
    }

     cout << "Number of donations larger than the average: " << largerThanAverage << endl;

    return 0;
}
