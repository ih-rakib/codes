#include<stdio.h>
#include<string.h>

int main() {
    char s[100];
    scanf("%s",&s);
    
    int counter[26]={0};
    
    for(int i=0;i<(int)strlen(s);++i){
        counter[s[i]-'a']++;
    }
    
    for(char i='a';i<='z';++i){
        if(counter[i-'a']!=0){
            printf("%c : %d times\n",i,counter[i-'a']);
        }
    }
    
}

// count characters of string 
