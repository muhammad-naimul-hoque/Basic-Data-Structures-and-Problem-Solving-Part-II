#include <bits/stdc++.h>
using namespace std;

class Parent
{
public:
    void fun()
    {
        cout << "Parent" << endl;
    }
};
class Child
{
public:
    void fun()
    {
        cout << "Child" << endl;
    }
};

int main()
{
    Parent pt;
    Child ch;

    ch.fun();
    pt.fun();

    return 0;
}