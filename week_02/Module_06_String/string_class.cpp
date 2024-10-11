#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str1 = "abcd";
    string str2 = "abcd";

    if (str1 == str2)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    string str3 = str1 + str2;
    cout << str3 << endl;

    return 0;
}