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

    cout << "Menu" << endl;
    cout << "   1.Square Matrix." << endl;
    cout << "   2.Diagonal Matrix." << endl;
    cout << "   3.Scaler Matrix." << endl;
    // cout << "   4.Identity Matrix." << endl;
    cout << "   0.Exit" << endl;

    int condition;
    cout << "Enter Number of the menu: ";
    cin >> condition;

    switch (condition)
    {
    case 1:
        if (row == col)
            cout << "This is Square Matrix." << endl;
        else
            cout << "This matrix is not square matrix." << endl;
        break;
    case 2:
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (row == col)
                    continue;
                if (matrix[row][col] > 0)
                {
                    cout << "This is not Diagonal matrix." << endl;
                    break;
                }
            }
        }
        cout << "This is Diagonal matrix." << endl;
        break;
    case 3:
        int save;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (row == col)
                {
                    if (i == 0 && j == 0)
                        save = matrix[row][col];
                }
                else
                {
                    if (save != matrix[row][col])
                    {
                        cout << "This is not a scaler matrix." << endl;
                        break;
                    }
                }
            }
        }
        cout << "This is a scaler matrix." << endl;
        break;

    default:
        break;
    }
}
