#include<iostream>
#include <stdio.h>
using namespace std;
int factorial(int fact)
{
    if (fact==0){
        return 1;
    }
    return fact =fact*factorial(fact-1);
}
int main()
{
    int fact;
    cout<<"Enter your factorial value \n";
    cin>>fact;
    cout<<factorial(fact);
    return 0;
}