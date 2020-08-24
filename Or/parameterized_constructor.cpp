#include<bits/stdc++.h>

using namespace std;

class A{
    int a;

public:
    A(int x = 0)
    {
        a = x;
    }

    void print_a()
    {
        cout<<a;
    }
};

int main()
{
    A o(7), o1;
    o.print_a();
    o1.print_a();

    return 0;
}