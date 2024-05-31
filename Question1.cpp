//! Topic :- Basic Inheritance and access specifiers


#include<bits/stdc++.h>
using namespace std;

class base{
    
    base(){
        cout << "base"<<endl;
    }
    protected:
    base(string s)
    {
        cout <<s;
    }
};

class derived : public base {

    public:
    derived()
    {
        cout << "derived"<<endl;
    }
};


int main()
{
    derived d;
    base b("only base class");

    return 0;
}