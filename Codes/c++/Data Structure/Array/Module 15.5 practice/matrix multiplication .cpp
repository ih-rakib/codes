#include<bits/stdc++.h>
using namespace std;

void solve(){
    int first[17][17],second[17][17],result[17][17],sum=0,r1,c1,r2,c2;
    cout << "Enter row and column of first matrix : ";
    cin >> r1 >> c1;
    cout << "Enter row and column of second matrix : ";
    cin >> r2 >> c2;
    
    if(c1!=r2){
        cout << "Can't multiply!"; return;
    }
    
    cout << "Enter Values of First Matrix : \n";
    
    for(int i=0;i<r1;++i){
        for(int j=0;j<c1;++j){
            cin >> first[i][j];
        }
    }
    
    cout << "Enter Values of Second Matrix : \n";
    
    for(int i=0;i<r2;++i){
        for(int j=0;j<c2;++j){
            cin >> second[i][j];
        }
    }
    
    cout << "Multiplication : \n";
    
    for(int i=0;i<r1;++i){
        for(int j=0;j<c2;++j){
            sum = 0;
            for(int k=0;k<r1;++k){
                sum += first[i][k]*second[k][j];
            }
            result[i][j] = sum;
        }
    }
    
    for(int i=0;i<r1;++i){
        for(int j=0;j<c2;++j){
            cout << result[i][j] << ' ';
        }
        cout << '\n';
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