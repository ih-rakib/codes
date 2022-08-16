#include<bits/stdc++.h>
using namespace std;
int binarySearch(int a[],int x,int lo,int hi){
    if(lo<=hi){
        int mid = (lo+hi)/2;
        if(x == a[mid]) return mid;
        else if(x > a[mid]) binarySearch(a,x,mid+1,hi);
        else binarySearch(a,x,lo,mid-1);
        
    }
    else 
    {
        return -1;
    }
    
}
int main()
{
    int n;
    cin >> n;
    int a[n+7];
    for(int i=0;i<n;++i){
        cin >> a[i];
    }
    int checkValue;
    cout << "Enter value to search : ";
    cin >> checkValue;
    int index = binarySearch(a,checkValue,0,n-1);
    if(index != -1){
        cout << index << '\n';
    }else {
        cout << "Not Found\n";
    }
    return 0;
}


    /*

        Binary Search
        
        10
        2 8 9 12 17 19 25 43 56 98
        25
        
        3 
        1 2 3
        3 ???
        

    */