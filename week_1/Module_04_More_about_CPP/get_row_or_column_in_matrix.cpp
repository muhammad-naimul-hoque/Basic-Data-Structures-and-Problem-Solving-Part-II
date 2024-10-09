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

    int condition;
    cout << "Menu:" << endl;
    cout << "     Press 1 for get row" << endl;
    cout << "     press 2 for get column" << endl;
    cout << "         press: ";
    cin >> condition;

    switch (condition)
    {
    case 1:
        int required_row;
        cout << "Enter required row: ";
        cin >> required_row;

        for (int i = 0; i < row; i++)
        {
            cout << matrix[required_row][i] << " ";
        }
        break;

    case 2:
        int required_column;
        cout << "Enter required column: ";
        cin >> required_column;

        for (int i = 0; i < row; i++)
        {
            cout << matrix[i][required_column] << " ";
        }
        break;

    default:
        cout << "Invalid Input.";
        break;
    }
}