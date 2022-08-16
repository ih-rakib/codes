#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void initialize(int *table){
    table[0] = 0;
    for(int i=1;i<256;++i){
        table[i] = table[i>>1] + (i&1);
    }
}

void solve(){
    int table[256];
    initialize(table);
    
    int n;
    cin >> n;
    
    int count = 0;
    for(int i=0;i<4;++i){
        count += table[n&255];
        n = n >> 8;
    }
    
    cout << count << '\n';
    
}

int main(){
    int t=1; scanf("%d",&t);
    while(t--){
        solve();
    }
    
    return 0;
}


/*

   count number of set bit for multiple query
    
    
*/