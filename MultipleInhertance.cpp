//WAP in C++ to implement multiple inheritance 
#include <iostream>
using namespace std;
class num1   //base class
{
    public:
        int a=10;
};
class num2   //base class
{
    public:
        int b=20;
};
class num3   //base class
{
    public:
        int c=30;
};
//publicly, multiple inheritance
class sum : public num1, public num2, public num3   //derived class
{
    public:
        int ans=a+b+c;
};
int main()
{
    sum s;
    cout<<"The sum of three number is:  "<<s.ans;
    return 0;
}