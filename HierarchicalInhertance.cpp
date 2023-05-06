#include <iostream>
using namespace std;
class var
{
    public:
        int x=10, y=20;
};
class add: public var
{
    public:
    int add=x+y;
};
class mult: public var
{
    public:
    int mul=x*y;
};
class square: public mult
{
    public:
    int result= mul*mul;
};
int main()
{
    add a;
    cout<<"Sum is: "<<a.add;
    mult m;
    cout<<"\nProduct is: "<<m.mul;
    square s;
    cout<<"\nSqaure is: "<<s.result;
    return 0;
}