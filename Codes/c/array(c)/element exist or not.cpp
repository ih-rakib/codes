#include<stdio.h>
#include<limits.h>
int main(){
    int a[100];
    int x = 25;
    bool flag = false;
    int idx;
    for(int i=0;i<5+1;++i){
        scanf("%d",&a[i]);  
        if(a[i]==x){
            flag = true;
            idx = i+1;
            break;
        }
    }
    if(flag)
        printf("exist at index %d",idx);
    else 
        printf("not exist");
}
/*
    

*/