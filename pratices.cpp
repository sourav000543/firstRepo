//WAP in C++ to implement Scope Resolution Operator
#include <iostream>
using namespace std;
int a=20;
class one
{   
    int a=10;
    public:
        void display()
        {
            cout<<a<<endl;
            cout<<::a<<endl;
        }
};
int main()
{
    one o;
    o.display();
    return 0;
}