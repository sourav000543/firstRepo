#include<iostream>
#include <stdio.h>
using namespace std;
class des
{
    private:
    int num1, num2;
    public:
    des(int n1,int n2)
    {
        cout<<"Inside constructor"<<endl;
        num1=n1;
        num2=n2;
    }
       void display()
       {
           cout<<"num1="<<num1<<endl;
           cout<<"num2="<<num2<<endl;
       }
       ~des()
       {
           cout<<"inside Destructor";
       }
};
int main()
{
    des obj1(10,20);
    obj1.display();
    return 0;

}