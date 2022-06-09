/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int main(){
    string a;
    string b;
    cin>> a >> b ;
    cout<< a.size() << " "<< b.size() << endl << a+b<< endl;
    swap( a[0], b[0] );
    cout << a << ' ' <<  b << endl;
    
    
}
