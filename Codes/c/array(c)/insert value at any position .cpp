#include<stdio.h>
#include<string.h>
#include<stdbool.h>

void insert(int *a,int n,int pos,int val){
    for(int i=n-2;i>=pos;--i){
        a[i+1] = a[i];
    }
    a[pos] = val;
}

void solve() {
    int a[7] = {1,2,3,4,5,6};
    int pos,val;
    scanf("%d %d",&pos,&val);
    insert(a,7,pos,val);
    
    for(int i=0;i<7;++i)
        printf("%d ",a[i]);
}

int main() {
    int t=1;
    //scanf("%d",&t);
    while(t--) {
        solve();
    }
}

/*

    - insert value in a position 


*/