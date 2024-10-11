#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row, col;
    cout << "Enter your matrix size: ";
    cin >> row >> col;
    int diagonal_matrix[row][col];

    cout << "Enter your matrix: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> diagonal_matrix[i][j];
        }
    }

    int sum = 0;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == j)
            {
                sum += diagonal_matrix[i][j];
            }
        }
    }

    cout << "sum = " << sum << endl;

    return 0;
}