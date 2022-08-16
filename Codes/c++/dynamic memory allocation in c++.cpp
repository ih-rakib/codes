#include<bits/stdc++.h>
using namespace std;
int main(){
    int *p = new int[10]; // declare
    int *q = new int[10]{1,2,3}; // initialize 
    
    for(int i=0;i<10;++i) cout << q[i] << ' ';
    
    delete q; // like free() in c
}


/*

    dynamic memory allocation in c++

*/