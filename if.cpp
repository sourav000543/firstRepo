#include<iostream>
#include <stdio.h>
using namespace std;
//Program for if
class control
{
    int x;
    public:
        void getdata()
        {
            cout<<"Enter a no.:  ";
            cin>> x;
        }
        void check()
        {
            if(x>10)
                cout<<"\nThe no is greater than 10.";
        }
};
int main()
{
    control c1;
    c1.getdata();
    c1.check();
    return 0;
}