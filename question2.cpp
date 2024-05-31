//! Topic :- Shadow  Parametre 

#include<bits/stdc++.h>
using namespace std;

class base{
    int x;

    public:
    base(int x = 0) : x(x)
    {
        cout << "Base";
    }
};

class derived : public base{
    int y;

    public:
    derived(int y , int x) 
    {
        base(x);
        cout << "derived";
    }
};

int main()
{
    derived d(5, 3);

    return 0;
}