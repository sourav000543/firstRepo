#include <fstream>
#include <iostream>
using namespace std;
int main()
{
     char data[100];

   // open a file in write mode.
   ofstream outfile;
   outfile.open("afile.dat");

   cout << "Writing to the file" << endl;
   cout << "Enter your name: "; 
   cin.getline(data, 100);

   // write inputted data into the file.
   outfile << data << endl;

   cout << "Enter your age: "; 
   cin >> data;
   
   
   // again write inputted data into the file.
   outfile << data << endl;

   cout<<"----->file close";

   // close the opened file.
   outfile.close();

   return 0;
}