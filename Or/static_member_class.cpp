#include<bits/stdc++.h>

using namespace std;

class Account{  
    int balance;         // Instance member variable
    static float roi;    //  Static or Class member variable

public:
    void set_Balance(int b)
    {
        balance = b;
    }

    void get_Balance()
    {
        cout<<balance<<" "<<roi<<endl;
    }
};

// float Account::roi;

int main()
{
    Account a, b;
    

    return 0;
}