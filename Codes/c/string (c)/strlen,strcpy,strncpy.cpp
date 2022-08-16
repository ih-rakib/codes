#include<stdio.h>
#include<string.h>

int main() {

    char s1[100] = "I love Kashmir.";
    char s2[10];
    int len = strlen(s1);
    printf("String length = %d\n",len);
    // strcpy(s2,s1);
    strncpy(s2,s1,10);
    s2[10] = '\0';
    
    printf("%s\n",s2);
}

/*
    
    inBuilt Functions
    
    -> strlen
    -> strcopy // possibility of buffer overflow 
    -> strncopy
    
*/
    