#include <bits/stdc++.h>
using namespace std;

class Parent
{
public:
    int x;

private:
    int y;

protected:
    int z;

public:
    Parent(int a, int b, int c)
    {
        x = a;
        y = b;
        z = c;
    }
};

class Child : public Parent
{
public:
    int xx;
    Child(int aa, int a, int b, int c) : Parent(a, b, c)
    {
        aa == xx;
    }
    void tellMe()
    {
        cout << "Protected value is: " << z << endl;
    }
};

int main()
{
    Parent pt(10, 20, 30);
    Child ch(1000, 10, 20, 30);
    ch.tellMe();
}