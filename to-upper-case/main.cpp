/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

char upper(char c){
    return 'A' + (c -'a');
}

int main(){
    while(true){
        string a;
        cin>> a ;
        if (a.size()==0){
            break;
        }
        for(int i=0; i<a.size(); ++i){
            a[i] =upper(a[i]);
        }
        cout<< a << endl;
    }
}
