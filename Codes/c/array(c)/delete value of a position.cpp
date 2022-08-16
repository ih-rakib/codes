#include<stdio.h>
#include<string.h>
#include<stdbool.h>

void del(int *a,int n,int pos){
    for(int i=pos+1;i<n;++i){
        a[i-1] = a[i];
    }
}

void solve() {
    int a[6] = {1,2,3,4,5,6};
    int pos;
    scanf("%d",&pos);
    del(a,6,pos);
    
    for(int i=0;i<5;++i)
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

    - delete value of a position 


*/