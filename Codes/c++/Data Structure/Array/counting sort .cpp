#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void print(int a[],int n){
    for(int i=0;i<n;++i){
        cout << a[i] << ' ';
    }
    cout << '\n';
}

void solve(){
    int n;
    cin >> n;
    int a[n+7];
    
    for(int i=0;i<n;++i){
        cin >> a[i];
    }
    
    // step 01 : Max determine
    int Max = INT_MIN;
    
    for(int i=0;i<n;++i){
        Max = max(Max,a[i]);
    }
    
    cout << "Max value : " << Max << '\n';
    
    // step 02 : int count[max+1]
    int count[Max+1];
    
    for(int i=0;i<=Max;++i){
        count[i] = 0;
    }
    
    // step 03 : count[a[i]]++;
    
    for(int i=0;i<n;++i){
        count[a[i]]++;
    }
    
    cout << "frequency : \n";
    print(count,Max+1);
    
    // step 04 : cumulative sum
    
    for(int i=1;i<=Max;++i){
        count[i] += count[i-1];
    }
    
    cout << "cumulative sum : \n";
    print(count,Max+1);
    
    // step 05 : backword reverse
    
    int final[n+7];
    for(int i=n-1;i>=0;--i){
        count[a[i]]--;
        int k = count[a[i]];
        final[k] = a[i];
    }
    
    cout << "final array : \n";
    print(final,n);
    
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int t = 1;
    //cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}


    /*

        counting sort
        
        step 01 : Max determine
        step 02 : int count[max+1]
        step 03 : count[a[i]]++;
        step 04 : for(1 -> max) count[i] += count[i-1]
        step 05 : for(n-1 -> 0) {
                      k = count[a[i]]--;
                      final[k] = a[i];
                  }
            
            
        time complexity : O(n)
        
        8
        4 2 5 7 3 1 8 6

    */