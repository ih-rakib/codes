#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int x = sqrt(n);

    int a[x+7];
    
    for(int i=0;i<n;++i){
        cin >> a[i];
    }
    
    int count = 0;

    for(int i=0;i<n;++i){
        cout << a[i] << ' ';
        count++;
      	//cout << "count : " << count << " x = " << x << '\n';
        if(count==x) {
			count = 0;  cout << '\n';
		}  
    }
}

int main(){
    int t = 1;
   // cin >> t;
    
    while(t--){
        solve();
    }
    
    return 0;
}