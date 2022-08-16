#include<stdio.h>
#include<string.h>

int main() {

    char s[100] = "I love Kashmir.";
    int sz = sizeof(s)/sizeof(s[0]);
    
    int idx = 0;
    while(s[idx]!='\0'){
        idx++;
    }
    
    /*
    int len = strlen(s);
    printf("String Length = %d\n",len);
    */
    
    printf("Array size = %d\n",sz);
    printf("String Length = %d\n",idx);
}

/*
    
    Length of a string
    
*/
    