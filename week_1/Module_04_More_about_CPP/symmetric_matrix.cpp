#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row, col;
    cout << "Enter row & column size: ";
    cin >> row >> col;
    cout << endl;

    int matrix[row][col];
    cout << "Enter your matrix: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (matrix[i][j] != matrix[j][i])
                cout << "Not Symmetric" << endl;
        }
    }
    cout << "Symmetric" << endl;
}