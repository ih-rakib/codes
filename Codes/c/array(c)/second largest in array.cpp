#include<stdio.h>
#include<limits.h>
int main(){
    int a[100];
    int mx1 = INT_MIN,mx2 = INT_MIN;
    for(int i=0;i<10;++i){
        scanf("%d",&a[i]);
        if(a[i]>mx1){
            mx2 = mx1;
            mx1 = a[i];
        }else if(a[i]>mx2 && a[i]<mx1){
            mx2 = a[i];
        }
    }
    printf("Second largest = %d\n",mx2);
    printf("largest = %d\n",mx1);
    
}
/*
    7 2 3 8 6 6 75 38 3 2

*/