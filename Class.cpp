
#include<iostream>
#include <stdio.h>
using namespace std;
class student
{
    public:
    int reg;
    float marks;
   
    
    void getdata()
    {
        cout<<"Enter reg no.";
        cin>>reg;
        cout<<"Enter aggregate marks:";
        cin>>marks;
    }
    void display()
    {
        cout<<"\nRegistration no is: "<< reg;
        cout<<"\nMarks: "<< marks;
    }
};
int main()
{
    student avi;
    avi.getdata();
    avi.display();
  
    
    return 0;
}
