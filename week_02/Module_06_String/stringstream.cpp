#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "ab ab cd cd xy xy";
    // stringstream stream(s);
    stringstream stream;
    stream << s;

    string w;
    while (stream >> w)
        cout << w << endl;

    return 0;
}