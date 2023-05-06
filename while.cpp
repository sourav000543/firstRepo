#include<iostream>
#include <stdio.h>
using namespace std;
class Whileloop
{
    int n;
    int sum = 0;
		
    public:
    
        void getdata()
        {
            cout<<"Enter no :";
            cin>>n;
            int temp = n;
            while (temp >0) {
            int	lastdgite = temp % 10;
            int reverse = temp = temp / 10;
            sum = sum+ lastdgite;
            }


        } 

        void display()
        {
         cout<<"sum of no "<<n <<" is "<<sum<<" " ;
        
        }
    
};
int main()
{
 Whileloop st;
    st.getdata();
    st.display();
    return 0;
}