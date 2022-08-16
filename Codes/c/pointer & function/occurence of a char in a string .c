#include <stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>

int main() {
    char s[100], c;
    gets(s);
    scanf(" %c",&c);
    char *cur = s;
    int count = 0;
    while(cur){
        char *pos = strchr(cur,c);
        if(pos==NULL) break;
        count++;
        printf("Found at index %d\n",pos-s);
        cur = pos+1;
    }
    printf("Total %d times\n",count);
}
    
    
/*

    how many times a character occures 
    in a string?
    
    I am a programmer
    a
    
    3 times
    

*/