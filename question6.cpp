//! topic :- friend function and friend class

#include<bits/stdc++.h>
using namespace std;
class base {
    int x = 0;
    friend void show();
    friend void derived::show();
};

class derived : public base {
    int y = 2;
    public:
    void show()
    {
        base b;
        cout << b.x;
    }
};



void show()
{
    base b;
    cout << b.x<<" ";
    derived d;
    cout << d.y<<" ";
}



int main()
{
    show();
    return 0;
}