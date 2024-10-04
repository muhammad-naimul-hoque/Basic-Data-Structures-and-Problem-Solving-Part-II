#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 10, b = 100, c = 50;
    int minimum = min(a, min(b, c));
    int maximum = max(a, max(b, c));

    cout << "Minimum = " << minimum << endl;
    cout << "Maximum = " << maximum << endl;

    int ara[5] = {5, 1, 3, 2, 4};
    minimum = ara[0];
    for (int i = 1; i < 5; i++)
    {
        minimum = min(minimum, ara[i]);
        /*if (ara[i] < minimum)
        {
            minimum = ara[i];
        }*/
    }
    cout << "Minimum element of the Array is: " << minimum << endl;
}