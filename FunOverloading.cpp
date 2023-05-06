//WAP in C++ to implement Function Oerloading
#include<iostream>
using namespace std;
class func_over
{
    public:
    int sum(int x, int y)
    {
        return x+y;
    }
    int sum(int x, int y, int z)
    {
        return x+y+z;
    }
};
int main()
{
    func_over f1;
    cout<<"Sum of 2 nos: "<<f1.sum(2,5);
    cout<<"\nSum of 3 nos: "<<f1.sum(6,7,3);
    return 0;
}