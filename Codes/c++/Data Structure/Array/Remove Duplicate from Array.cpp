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
        for(int j=i+1;j<n;++j){
            if(a[i]==a[j]){
                for(int k=j;k<n;++k){
                    a[k] = a[k+1];
                }
                n--;
                j--;
            }
        }
    }
    
    for(int i=0;i<n;++i){
        cout << a[i] << " ";
    }
    
    
    
    return 0;
}


    /*

        Remove Duplicate from Array
        5
        1 2 1 3 1
        ans : 1 2 3
      
        

    */