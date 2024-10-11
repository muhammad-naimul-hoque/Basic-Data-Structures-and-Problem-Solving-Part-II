#include <bits/stdc++.h>
using namespace std;
class Student
{
private:
    int x;
    int pass;

public:
    Student(int p)
    {
        pass = p;
    }
    void setter(int a, int p)
    {
        if (pass == p)
        {
            x = a;
        }
        else
        {
            cout << "Password didn't match.";
        }
    }

    int getter(int p)
    {
        if (pass == p)
            return x;
        else
        {
            cout << "Password didn't match.";
            return -1;
        }
    }
};

int main()
{
    Student student(1234);
    student.setter(1500, 1235);
    cout << student.getter(1234) << endl;
}