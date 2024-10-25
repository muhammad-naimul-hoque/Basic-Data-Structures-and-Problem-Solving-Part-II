#include <bits/stdc++.h>
using namespace std;

void PrintArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

void Insertion(int array[], int size, int position, int value)
{
    if (position < 0 || position > size)
    {
        cout << "Invalid index." << endl;
    }
    else
    {
        // for (int i = size - 1; i >= position; i--)
        // {
        //     array[i + 1] = array[i];
        // }
        array[size] = array[position];
        array[position] = value;
    }
}

int main()
{
    int array[50];

    int size;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    cout << "Given Array: ";
    PrintArray(array, size);

    cout << " Position of the insertion: ";
    int pos;
    cin >> pos;
    cout << " Value of the insertion: ";
    int value;
    cin >> value;

    Insertion(array, size, pos, value);

    cout << " Array after the insertion: ";
    PrintArray(array, size + 1);

    return 0;
}