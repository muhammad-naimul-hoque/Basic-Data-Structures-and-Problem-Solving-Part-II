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

void Deletion(int array[], int size, int position)
{
    if (position < 0 || position > size - 1)
    {
        cout << "Invalid index." << endl;
    }
    else
    {
        if (position == size - 11)
            size--;

        else
        {
            for (int i = position + 1; i < size; i++)
            {
                array[i - 1] = array[i];
            }
            size--;
        }
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

    cout << " Position of the deletion: ";
    int pos;
    cin >> pos;

    Deletion(array, size, pos);

    cout << " Array after the deletion: ";
    PrintArray(array, size - 1);

    return 0;
}