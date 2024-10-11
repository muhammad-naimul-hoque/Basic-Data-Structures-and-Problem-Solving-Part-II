#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin >> num;

    if (num % 2 == 0)
    {
        if (num < 10)
        {
            cout << "Even and less then 10.";
        }
        else
        {
            cout << "Even and grater then 10.";
        }
    }
    else
    {
        cout << "Odd.";
    }
}