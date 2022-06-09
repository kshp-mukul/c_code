/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
   int bs,ta,da;
   
   cout<<"enter your base salary";
   cin>>bs;
   
   ta=(12*bs)/100;
   da=(10*bs)/100;
   
   bs+=ta+da;
   
   cout<<"Gross Salary"<<bs;
   
   return 0;
   
}