#include <bits/stdc++.h>
using namespace std;

class Example
{
public:
    int x;
    Example(int a)
    {
        x = a;
    }

    int operator+(Example obj)
    {
        /*Example ans(0);
        ans.x = x + obj.x;
        return ans;*/
        return x + obj.x;
    }
};

int main()
{
    Example a(10), b(20), c(30);
    int ans = a + b;
    Example ansObj(ans);
    cout << ansObj + c << endl;

    return 0;
}