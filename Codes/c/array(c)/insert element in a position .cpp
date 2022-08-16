#include<stdio.h>
#include<limits.h>
int main(){
    int a[100];
    int x = 3;
    int v = 25;
    for(int i=0;i<5+1;++i){
        if(i!=x-1){
            scanf("%d",&a[i]);
        }       
    }
    a[x-1] = v;    
    
    for(int i=0;i<5+1;++i){
        printf("%d ",a[i]);
    }
}
/*
    

*/