#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str1 = "abc";
    string str2 = "xyz";

    cout << "assign = " << str1.assign(str2) << endl;
    str1 = "abc";
    cout << "append = " << str1.append(str2) << endl;

    string str3 = "efg";
    str3.push_back('h');

    cout << "after push back string = " << str3 << endl;
    str3.pop_back();
    cout << "after pop back string = " << str3 << endl;

    str3.insert(1, "hij");
    cout << "after insert string = " << str3 << endl;

    str3.erase(1, 3);
    cout << "after erase string = " << str3 << endl;

    cout << "before swap str2 = " << str2 << " str3 = " << str3 << endl;
    swap(str2, str3);
    cout << "after swap str2 = " << str2 << " str3 = " << str3 << endl;

    return 0;
}