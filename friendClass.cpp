#include<iostream>
#include <stdio.h>
using namespace std;
class A
{
    int a,b;
    public:
    void input()
    {
        cout<<"Enter the value of a :";
        cin>>a;
        cout<<"Enter the value of b :";
        cin>>b;
    
    }
    friend class B ;
};
class B
{
    int c;
    public:
    void add(A ob)
{
    c=ob.a+ob.b;
    cout<<"Sum of a and b :"<<c;
}
};
int main()
{
    A ar;
    B sr;
    ar.input();
    sr.add(ar);
    return 0;
}