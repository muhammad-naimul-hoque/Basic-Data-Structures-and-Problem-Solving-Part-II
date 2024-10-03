#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    if (a > b)
    {
        cout << "A is grater.";
    }
    else if (a < b)
    {
        cout << "B is grater.";
    }
    else
    {
        cout << "A and B is equal." << endl;
    }
}