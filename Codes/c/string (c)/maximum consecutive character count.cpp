#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<math.h>

int main() {
    int l;
    scanf("%d",&l);
    getchar();
    char s[100];
    for(int i=0;i<l;++i){
        scanf("%c",&s[i]);
    }   
    int ans = 1,current = 1;
    for(int i=0;i<l-1;++i){
        if(s[i]==s[i+1]){
            current++;
            //printf("i=%d,current = %d\n",i,current);
            ans = (current>ans?current:ans);
        }else {
            current = 1;
        }
    }      
    printf("%d\n",ans);
}

/*

    5
    +++-- 
    ans : 3
    7 
    +-+-++-
    ans = 2
    5
    ----- 
    ans = 5

*/



    