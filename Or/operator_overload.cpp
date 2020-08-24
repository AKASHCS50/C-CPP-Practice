#include<bits/stdc++.h>

using namespace std;

class Complex{
    int real;
    int img;

public:
    void set_data(int r, int i)
    {
        real = r;
        img = i;
    }

    void show_data()
    {
        cout<<real<<" "<<img<<endl;
    }

    Complex operator +(Complex &c)
    {
        Complex res;
        res.real = real + c.real; 
        res.img = img + c.img;
        return res;
    } 

};

// void show_data()
// {
//     cout<<"this is";
// }

int main()
{
    Complex c1, c2, c3;

    c1.set_data(3, 5);
    c1.show_data();
    
    // show_data();

    c2.set_data(5, 4);
    c2.show_data();

    c3 = c1 + c2; // Operator Overloading

    c3.show_data();

    return 0;
}