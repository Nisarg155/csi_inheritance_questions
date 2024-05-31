//! Topic :- Access Specifiers 


#include <bits/stdc++.h>
using namespace std;

class base{
    int x = 10;
    public:
        int get_x(){
            return x;
        }
};

class derived : public base {
    public:
        int y = 20;
        int get_y()
        {
            return y;
        }
};

int main()
{
    derived d;
    cout << d.get_y() << " " << d.get_x()<<endl;
    return 0;
}