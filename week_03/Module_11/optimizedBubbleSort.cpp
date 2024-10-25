#include <bits/stdc++.h>
using namespace std;

void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main()
{
    int size;
    cout << "Enter your size: ";
    cin >> size;

    int array[size];
    cout << "Enter your arrays value: ";
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    cout << "Before Sort: ";
    printArray(array, size);
    cout << endl;

    // Bubble Sort Implementation
    for (int i = 1; i < size; i++)
    {
        int flag = 0;
        cout << "Iteration No: " << i << endl;
        for (int j = 0; j < size - i; j++)
        {
            if (array[j] > array[j + 1]) // bubble up (assending order) = array[j] > array[j+1], bubble down(desending order) = array[j] < array[j+1]
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                flag = 1;
            }
            printArray(array, size);
        }
        cout << endl;
        if(flag == 0)
            break;
    }

    cout << "After Sort: ";
    printArray(array, size);
    cout << endl;

    return 0;
}
/*
sudo code of bubble sort
for(int i -> 1 to n-i-1)
{
    for(int j -> 0 to n-2)
    {
        if(array[j] > array[j+1]) swap(array[j], array[j+1]);
    }
}
*/