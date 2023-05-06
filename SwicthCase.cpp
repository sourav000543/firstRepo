#include<iostream>
#include <stdio.h>
using namespace std;
//Switch case,  to make a calculator
class calculator
{
    int num1, num2, result=0, option;
    public:
    void get()
    {
        cout<<" Enter 1 for addition\nEnter 2 for substraction\nEnter 3 for multiplication\nEnter 4 for division";
       cout<<"\nEnter the option ";
        cin>>option;

        
    }
    void getdata()
    {
        cout<<"Enter the value of a and b:   ";
        cin>>num1>>num2;
    }
    void calculate()
    {
        switch(option)
        {
            case 1:
                result= num1+num2;
                break;
            case 2:
                result= num1-num2;
                break;
            case 3:
                result= num1*num2;
                break;
            case 4:
                result= num1/num2;
                break;
            default:
                cout<<"Invalid Input";
                break;
        }
  
    }
    int getresult()
    {
        return result;
    }
};
int main()
{
    calculator c;
    c.get();
    c.getdata();
    c.calculate();
   cout<<"\nThe result is :"<<c.getresult();

    return 0;
}

