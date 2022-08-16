#include<stdio.h>
#include<string.h>

int main() {
    char s[10];
    gets(s);
    int freq[10] = {0};
    for(int i=0;i<9;++i){
        int digit = s[i]-'0';
        freq[digit]++;
    }
    int ans;
    for(int i=0;i<9;++i){
        if(freq[i]==0){
            ans = i;
        }       
    }
    printf("%d\n",ans);
}
/*
    023456789
    ans = 1
    283179504
    ans = 6 

*/