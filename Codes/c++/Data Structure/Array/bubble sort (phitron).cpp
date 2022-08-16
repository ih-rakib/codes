
#include<bits/stdc++.h> 
using namespace std; 
 
int main() 
{ 
    int n; 
    cin >> n; 
    int a[n+7]; 
    for(int i=0;i<n;++i){ 
        cin >> a[i]; 
    } 
     
    for(int i=0;i<n-1;++i){ 
        bool flag = false; 
        cout << "iteration no : " << i+1 << '\n'; 
        for(int j=0;j<n-i-1;++j){ 
            if(a[j]>a[j+1]){ 
                swap(a[j],a[j+1]); 
                flag = true; 
            } 
            
            for(int i=0;i<n;++i){ 
                cout << a[i] << " "; 
            } 
            cout << '\n'; 
            
        } 
        cout << '\n'; 
        if(!flag) break; 
    } 
     
    for(int i=0;i<n;++i){ 
        cout << a[i] << " "; 
    } 
     
     
     
    return 0; 
} 
 
 
    /* 
 
        Bubble Sort 
        5 
        3 4 1 2 7 
        ans : 1 2 3 4 7 
         
         
       
         
 
    */ 
