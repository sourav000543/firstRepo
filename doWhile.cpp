
// program to add number until the user enters 0
#include<iostream>
#include <stdio.h>
using namespace std;
class Dowhile
{
    int n, sum=0;
    public:
        void gatdata()
        {
            do
            {
                cout<<"Enter no: ";
                cin>>n;
                sum+=n;
            }
            while(n!=0);{
                cout<<"Sum of no: "<<sum;
            }
        }
          
};
int main(){
    Dowhile st;
    st.gatdata();
   
    return 0;
}