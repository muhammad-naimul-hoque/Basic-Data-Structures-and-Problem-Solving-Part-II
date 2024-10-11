#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "abcdefghij";
    cout << str << " " << str.size() << endl;
    str.resize(4);
    cout << str << " " << str.size() << endl;
    str.clear();
    cout << str << " " << str.size() << endl;

    if (str.empty())
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}