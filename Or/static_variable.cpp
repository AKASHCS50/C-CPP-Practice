#include<bits/stdc++.h>

using namespace std;

void fun()
{
    static int x;     // Allocated and initialised by 0 in memory at the time of declaration
    int y;           // Gets memory when fun is called

    cout<<x<<" "<<y;
}

int main()
{
    fun();

    return 0;
}