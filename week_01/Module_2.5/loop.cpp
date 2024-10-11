#include <bits/stdc++.h>
using namespace std;

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        cout << i << " ";
    }

    int i = 1;
    int sum = 0;
    while (i <= 10)
    {
        sum += i;
        i++;
    }

    cout << "Sum = " << sum << endl;

    return 0;
}