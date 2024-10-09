#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row = 4, col = 4;
    int ara[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> ara[i][j];
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << i << "," << j << " ";
        }
        cout << endl;
    }
}