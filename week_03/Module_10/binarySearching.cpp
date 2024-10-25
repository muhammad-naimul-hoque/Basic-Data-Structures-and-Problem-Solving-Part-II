#include <bits/stdc++.h>
using namespace std;

int binarySearch(int array[], int x, int lb, int ub)
{
    if (lb < ub)
    {
        int mid = (lb + ub) / 2;
        // x == array[mid]
        if (x == array[mid])
            return mid;
        // x > array[mid]
        else if (x > array[mid])
            binarySearch(array, x, mid + 1, ub);

        // x < array[mid]
        else
            binarySearch(array, x, lb, mid - 1);
    }
    else
        -1;
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

    int checkValue;
    cout << "Please Enter the value you want to search: ";
    cin >> checkValue;

    int indexNumber;
    indexNumber = binarySearch(array, checkValue, 0, size - 1);

    if (indexNumber != -1)
        cout << "Index No: " << indexNumber << " Position No: " << indexNumber + 1 << endl;
    else
        cout << "NOT FOUND!" << endl;

    return 0;
}

/*
sodu code of binary searching:
int BS(arr, x, low, high)
{
    if (low < high)
    {
        mid = (low + high) / 2;
        if (x == arr[mid])
            return mid;
        else if( x > arr[mid])
            BS(arr, x, mid + 1, high);
        else
            BS(arr, x, lb, mid - 1);
    }
    else
        return -1;
}
*/