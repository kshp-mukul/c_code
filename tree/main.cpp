/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for (int i = 1; i<=n; ++i){
        for(int j = 1; j<= i; ++j){
            cout<<"*";
            
        }
        cout << endl;
    }
    
    
}