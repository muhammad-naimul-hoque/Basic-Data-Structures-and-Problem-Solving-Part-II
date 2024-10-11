#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ara[] = {2, 5, 7, 3, 1, 5, 4}, n = 7;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (ara[i] > ara[j])
            {
                swap(ara[i], ara[j]);
                /*int temp = ara[i];
                ara[i] = ara[j];
                ara[j] = temp;*/
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << ara[i] << " ";
    }
}