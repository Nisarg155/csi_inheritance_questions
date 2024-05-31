//! Topic :- Visibility Mode and changing visibility after inheritance

#include<bits/stdc++.h>

using namespace std;
class base1
{
private:
    int pvt1 = 1;
protected:
    int prot1 = 1;
public:
    int pub1 = 1;
    void show()
    {
        cout << pvt1 << " " << prot1 << " " << pub1;
    }
};


class derived : public base1  {
    public:
        using base1::prot1;
        using base1::pvt1;
};

int main()
{
    derived d;
    cout<<d.pvt1<<" "<<d.prot1<<" "<<d.pub1;
    return 0;
}