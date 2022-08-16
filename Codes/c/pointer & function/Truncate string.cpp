#include<stdio.h>
#include<string.h>

void Truncate(char s[],int k){
    int n = strlen(s);
    if(k<0 || k>n) return;
    s[k] = '\0';
}

int main() {
    char s[100];
    int k;
    scanf("%s",s);
    scanf("%d",&k);
    
    Truncate(s,k);
    
    puts(s);
}


/*

    abcdef
    Truncate(s,3)
    abc
    
    k যত দিবো ততগুলো ক্যারেক্টার থাকবে
    
*/

    
    