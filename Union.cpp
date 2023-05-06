#include<iostream>
#include <stdio.h>
using namespace std;
union unionJob
{
   //defining a union
   char name[32];
   float salary;
   int workerNo;
} uJob;



int main()
{
   printf("size of union = %d bytes", sizeof(uJob));
  
  
   return 0;
}









