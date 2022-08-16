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
    int target;
    cout << "Enter value to search : ";
    cin >> target;
    
    int lo = 0,hi = n-1;
    bool found = false;
    while(lo<=hi){
        int mid = (lo+hi)>>	1;
        
        if(a[mid]==target){
            cout << "Found at index : " << mid << '\n';
            found = true;
            break;
        }
        else if(target>a[mid]) lo = mid+1;
        else hi = mid-1;
    }
    
    if(!found) cout << "Not Found\n";
    
    
    return 0;
}


    /*

        Binary Search
        
        10
        2 8 9 12 17 19 25 43 56 98
        25
        
      
        

    */