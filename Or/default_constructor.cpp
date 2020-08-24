#include<bits/stdc++.h>

using namespace std;

class A{
    int a;

public:
    // static A() error
    A()
    {
        a = 5;
    }

    void print_a()
    {
        cout<<a;
    }
};

int main()
{
    A o;
    o.print_a();

    return 0;
}