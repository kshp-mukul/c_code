/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>> n;
        long long pro=1;
        for (int i=0; i<n; ++i){
            int x;
            cin>> x;
            pro=pro *x;
        }
        int digit = pro %10;
        if(digit ==2 || digit ==3 || digit==5){
            cout<< "YES\N";
        }else{
            cout<<"NO\N";
        }
    }
}
