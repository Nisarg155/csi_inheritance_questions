//! Topic :- method Overriding 

#include<bits/stdc++.h>
using namespace std;

class base{
    public:
        int x = 10;
        void print()
        {
            cout << "base" << endl;
        }
};

class derived :  public base{
    public :
        int x = 20;
        void print()
        {
            base::print();
            cout << "derived" << endl;
        }
};
int main()
{
    derived d;

    d.print();

    base *ptr = &d;

    ptr->print();

    d.base::print();

    cout << d.x <<endl;

    cout << d.base::x;
    
    return 0;
}