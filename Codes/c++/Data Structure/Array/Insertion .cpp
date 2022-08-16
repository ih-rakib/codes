#include<bits/stdc++.h>
using namespace std;

void printArray(int a[],int n){
    for(int i=0;i<n;++i){
        cout << a[i] << " ";
    }
    cout << '\n';
}

int main()
{
    int n;
    cin >> n;
    int a[n+7];
    
    for(int i=0;i<n;++i){
        cin >> a[i];
    }
    
    int pos,value;
    cin >> pos >> value;
    
    for(int i=n;i>=pos;--i){
        a[i] = a[i-1];
    }
    
    a[pos] = value;
    
    printArray(a,n+1);
    
    return 0;
}


/*

    Insertion 
    
    3 2 5 7 4
    pos : 2, value : 9
    3 2 9 5 7 4


*/