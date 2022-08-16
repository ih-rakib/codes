#include<stdio.h>

int max(int a,int b){
    if(a>b) return a;
    else    return b;
}

int getMax(int a[],int n){
    int result = a[0];
    for(int i=1;i<n;++i){
        result = max(result,a[i]);
    }
    return result;
}

int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;++i){
        scanf("%d",&a[i]);
    }
    
    int maximum = getMax(a,n);
    
    printf("%d\n",maximum);
}


    
    