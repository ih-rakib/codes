#include<stdio.h>
#include<string.h>

int main() {

    char a[10] = "Hello ";
    char b[10] = "World";
    int len_a = strlen(a);
    int len_b = strlen(b);
    int len_c = strlen(a) + strlen(b);
    char c[len_c+1];
    
    for(int i=0;i<len_a;++i){
        c[i] = a[i];
    }
    for(int i=0;i<len_a;++i){
        c[len_a+i] = b[i];
    }
    
    /*
    
    for(int i=0;i<len_b;++i){
        a[len_a+i] = b[i];
    }
    
    */
    c[len_c] = '\0';
    
    printf("%s\n",c);
    
    strcat(a,b); // buffer
    printf("%s\n",a);
    strncat(a,b,4); 
    a[9] = '\0';
    printf("%s\n",a);
}

/*
    
    Concatenatation of string
    s1 = "Hello "
    s2 = "World"
    s3 = Hello World
    
*/
    