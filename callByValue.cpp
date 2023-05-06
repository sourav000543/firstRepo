#include<iostream>
#include <stdio.h>
using namespace std;
class callbyvalue
{
    int a,b;
    public:
 
    void gatdata()
    {

    cout<<"Enter value of a :";
    cin>>a;
    cout<<"Enter value of b :";
    cin>>b;
    }
     void swap()
     {
         int temp;
         temp=a;
         a=b;
         b=temp;
         cout<<"The value of a = "<<a<<"\nThe value of b = "<<b;

     }

};
int main()
{
    callbyvalue c1;
    c1.gatdata();
    c1.swap();
    return 0;
}



