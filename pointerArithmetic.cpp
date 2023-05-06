//WAP in C++ to implement pointer and its operators
#include <iostream>
using namespace std;
//pass by value
    void calc1(int x)
    {
        cout<<"\nx=: "<<x;
    }
//pass by reference (pointer)
    void calc2(int *x)
    {
        cout<<"\naddress of x: "<<x;
    }
//pass by reference (address)
    void calc3(int &x)
    {
        cout<<"\naddress of x: "<<&x;
    }
int main()
{
    int a=10;
//call by value
    calc1(a);
//call by reference (pointer)
    calc2(&a);
//call by reference (address)
    calc3(a);
    return 0;
}