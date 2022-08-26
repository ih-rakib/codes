#include<bits/stdc++.h>
using namespace std;
#define mx 10000007
int freq[mx] = {0};

int main(){
    queue<int> q;
    int n;
    cin >> n;
    
    for(int i=0;i<n;++i){
        int x;
        cin >> x;
        q.push(x);
    }
    
    
    
    while(!q.empty()){
        int t = q.front();
        q.pop();
        freq[t]++;
    }
    
    int m;
    cin >> m;
    int ans[m+7];
    
    for(int i=0;i<m;++i){
        int chkElement;
        cin >> chkElement;
        if(freq[chkElement]==0){
            ans[i] = -1;
        }else {
            ans[i] = freq[chkElement];
        }
    }
    
    for(int i=0;i<m;++i){
        cout << ans[i] << "\n";
    }

    return 0;
}

/*

    frequency in queue

    Given N integers, the task is to insert those elements in the queue. Also, given M integers,your task is to find the frequency of each number of M in the Queue.




*/