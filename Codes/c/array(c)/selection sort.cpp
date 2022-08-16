#include<stdio.h>
#include<string.h>
#include<stdbool.h>

void selection_sort(int *a,int n){
    for(int pos=0;pos+1<n;++pos){
        for(int check=pos+1;check<n;++check){
            if(a[check]<a[pos]){ // > দিলে ডিসেন্ডিং অর্ডারে সর্ট হবে
                int temp = a[check];
                a[check] = a[pos];
                a[pos] = temp;
            }
        }
    }
}

void solve() {
    int a[6] = {6,3,5,7,4,1};
    selection_sort(a,6);
    
    for(int i=0;i<6;++i)
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

    - selection sort
    প্রতিটা পজিশন সিলেক্ট করে ছোট/বড় ভ্যালুটা নিয়ে আসবো


*/