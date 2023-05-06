#include<iostream>
#include <stdio.h>
using namespace std;
class first
{
    private:
    int a=3;
    friend void add ();
};
class second
{
    private:
    int b=4;
    friend void add ();
};
void add()
{   first c1;
      second c2;
    cout<<"Sum of "<<c1.a+c2.b;
}
int main()
{
    add();
    return 0;
      
}
