#include <bits/stdc++.h>
using namespace std;

class Example
{
public:
    // Function Overloading
    int add(int x, int y)
    {
        cout << "First One" << endl;
        return x + y;
    }
    double add(double x, double y)
    {
        cout << "Second One" << endl;
        return x + y;
    }
    void add(char a)
    {
        cout << "Hi" << a << endl;
    }
};

int main()
{
    Example ex;
    cout << ex.add(10, 20) << endl;
    cout << ex.add(10.5, 9.5) << endl;
    ex.add('z');
}

/*
    1. Compile Time:
        1->Function overloading
        2 -> Operator overloading
    2.Run Time:
        1 -> Function Overriding
        2 -> Virtual Function

*/