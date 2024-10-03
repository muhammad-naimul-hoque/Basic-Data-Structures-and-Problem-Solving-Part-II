#include <bits/stdc++.h>
using namespace std;

namespace one
{
    void fun()
    {
        cout << "I am namespace one";
    }
}

namespace two
{
    void fun()
    {
        cout << "I am namespace two";
    }
}

using namespace one;

int main()
{
    one::fun();

    return 0;
}