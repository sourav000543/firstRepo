#include <iostream>
using namespace std;
class base   //base class
{
    public:
        int x=10;
};
//publicly, single inheritance
class derived : public base   //derived class
{
    public:
        int y=20;
};
int main()
{
    derived d;
    cout<<"y from derived class is:  "<<d.y;
    cout<<"\nx from base class through derived class:  "<<d.x;
    return 0;
}