#include<iostream>
#include <stdio.h>
using namespace std;
class sum
{
    int a,b,add=0;
    public:
    sum()
    {
        a=5;
        b=10;
    }
    void result()
    {
        add=a+b;
        cout<<"Sum is :"<<add;
    }
};
int main()
{
    sum s;
    s.result();
    
    return 0;
}