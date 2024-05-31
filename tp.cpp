#include<bits/stdc++.h>
using namespace std;
class b1{
    protected:
    int n1;
public:
    b1(int n1): n1(n1)
    {}
    void print()
    {
        cout << n1 << " ";
    }
};
class b2{
    protected:
    int n2;
public:
    b2(int n2) : n2(n2)
    {}
    void print()
    {
        cout << n2 << " ";
    }
};
class d : public b1 , public b2{
    int n3 , n4;
public:
    d(int n1,int n2,int n3,int n4)
    :b1(n1),b2(n2),n4(this->n3*5),n3(n3)
    {}
    void print()
    {
        cout << n1 << " " << n2 << " " << n3 << " " << n4;
    }
};
int main()
{
    d der(1,2,3,4);
    der.print();
    return 0;
}