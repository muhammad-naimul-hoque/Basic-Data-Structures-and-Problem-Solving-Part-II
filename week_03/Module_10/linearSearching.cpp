#include <bits/stdc++.h>
using namespace std;

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

    char c;
    cout << "Do you want to Search: (Y/N) ";
    cin >> c;

    while (toupper(c) == 'Y')
    {
        int checkValue;
        cout << "Please Enter the value you want to search: ";
        cin >> checkValue;

        int flag = 0;
        for (int i = 0; i < size; i++)
        {
            if (array[i] == checkValue)
            {
                cout << "Index No: " << i << " Position: " << i + 1 << endl;
                flag = 1;
            }
        }

        if (flag == 0)
            cout << "NOT FOUND!" << endl;

        cout << "Do you want to Continue Searching: (Y/N) ";
        cin >> c;
    }
    return 0;
}

/*
sudo code of linear search :

int flag = 0;
for (0 --> size-1)
{
    if (array[i] == x)
    {
        print "i"
        flag = 1;
    }
}

if (flag == 0)
    print << "Not found!";

*/