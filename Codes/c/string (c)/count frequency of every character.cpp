#include<stdio.h>
#include<string.h>
int main(){
    char a[107];
    scanf("%s",a);
    int count[26] = {0};
    for(int i=0;i<strlen(a);++i){
        count[a[i]-'a']++;
    }
    printf("Character -> Frequency\n\n");
    for(int i=0;i<26;++i){
        printf("    %c\t  -> \t %d\n",i+'a',count[i]);
    }
}

// count frequency of characters 
// assume lowercase string as input