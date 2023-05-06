#include <iostream>
using namespace std;
class num1   //base class
{
    public:
        int a=10;
};
class num2 : public num1  //derived class
{
    public:
        int b=20;
};
class num3 : public num2  //derived class
{
    public:
        int sum=a+b;
};
int main()
{
    num3 n;
    cout<<"The sum of the two number is:  "<<n.sum;
    return 0;
}