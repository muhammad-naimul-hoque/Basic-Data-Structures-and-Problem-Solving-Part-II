#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ara[5] = {5, 4, 3, 2, 1};
    int n = 5;

    sort(ara, ara + n);

    for (int i = 0; i < n; i++)
    {
        cout << ara[i] << " ";
    }
}