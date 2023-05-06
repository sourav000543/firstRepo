#include <iostream>
using namespace std;
int main()
{
    int v[3]={100,200,300};
    int *ptr;
    ptr=v;
    for(int i=0; i<3; i++){
        cout<<"value of *ptr "<<*ptr<<endl;
        cout<<"\nvalue of ptr  "<<ptr<<endl;
        ptr++;
    }
    
};